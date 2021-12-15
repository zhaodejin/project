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

int main()
{
    typedef std::vector<boost::shared_ptr<int>> vs;
    vs v(10);
    int i = 0;
    for (auto pos = v.begin(); pos != v.end(); ++pos)
    {
        (*pos) = boost::make_shared<int>(++i);
        std::cout << *(*pos) << ",";
    }
    std::cout << std::endl;
    boost::shared_ptr<int> p = v[9];
    *p = 100;
    std::cout << *v[9] << std::endl;
    return 0;
}