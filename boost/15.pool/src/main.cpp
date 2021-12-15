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
#include <boost/pool/pool.hpp>
#define BOOST_SYSTEM_NO_DEPRECATION
int main()
{
    boost::pool<> p1(sizeof(int));
    int *p = static_cast<int *>(p1.malloc());
    assert(p1.is_from(p));
    p1.free(p);
    for (int i = 0; i < 100; ++i)
    {
        p1.ordered_malloc(10);
    }
    return 0;
}