#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/progress.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
boost::gregorian::days operator"" _D(unsigned long long n)
{
    return boost::gregorian::days(n);
}
boost::gregorian::weeks operator"" _W(unsigned long long n)
{
    return boost::gregorian::weeks(n);
}
boost::gregorian::date operator"" _YMD(const char *s, std::size_t)
{
    return boost::gregorian::from_string(s);
}
int main()
{
    auto d = 100_D;
    auto w = 1_W;
    assert(d.days() == 100);
    assert(w.days() == (7_D).days());
    auto today = "2014/11/3"_YMD;
    std::cout << today << std::endl;
    return 0;
}