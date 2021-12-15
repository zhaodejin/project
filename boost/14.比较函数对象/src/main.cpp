#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/progress.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/smart_ptr.hpp>
#include <algorithm>

#include <set>
#include <boost/smart_ptr/owner_less.hpp>

int main()
{
    typedef boost::shared_ptr<int> int_ptr;
    typedef boost::owner_less<int_ptr> int_ptr_less;
    int_ptr p1(new int(10));
    int n = 20;
    int_ptr p2(p1, &n);
    assert(!int_ptr_less()(p1, p2) && !int_ptr_less()(p2, p1));
    typedef std::set<int_ptr> int_set;
    int_set s;
    s.insert(p1);
    s.insert(p2);
    assert(s.size() == 1);
    return 0;
}