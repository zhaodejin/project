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

class sample
{
private:
    class impl;
    boost::shared_ptr<impl> p;

public:
    sample();
    void print();
};
class sample::impl
{
public:
    void print()
    {
        std::cout << "impl print" << std::endl;
    }
};
sample::sample() : p(new impl) {}
void sample::print()
{
    p->print();
}
int main()
{
    sample s;
    s.print();
    return 0;
}