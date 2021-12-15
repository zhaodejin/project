#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/progress.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
int main()
{
    boost::gregorian::date d1(2000, 1, 1), d2(2014, 11, 18);
    std::cout << d2 - d1 << std::endl;
    assert(d1 + (d2 - d1) == d2);
    d1 += boost::gregorian::days(10);
    assert(d1.day() == 11);
    d1 += boost::gregorian::months(2);
    assert(d1.month() == 3 && d1.day() == 11);
    d1 -= boost::gregorian::weeks(1);
    assert(d1.day() == 4);
    d2 -= boost::gregorian::years(10);
    assert(d2.year() == d1.year() + 4);
    return 0;
}