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

class shared
{
private:
    boost::shared_ptr<int> p;

public:
    shared(boost::shared_ptr<int> p_) : p(p_) {}
    void print()
    {
        std::cout << "count:" << p.use_count() << " v=" << *p << std::endl;
    }
};
void print_func(boost::shared_ptr<int> p)
{
    std::cout << "count:" << p.use_count() << " v=" << *p << std::endl;
}
int main()
{
    boost::shared_ptr<int> p(new int(100));
    shared s1(p), s2(p);
    s1.print();
    s2.print();
    *p = 20;
    print_func(p);
    s1.print();
    return 0;
}