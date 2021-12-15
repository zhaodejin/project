#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/progress.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/smart_ptr.hpp>
struct posix_file
{
    posix_file(const char *file_name)
    {
        std::cout << "open file" << std::endl;
    }
    ~posix_file()
    {
        std::cout << "close file" << std::endl;
    }
};

int main()
{
    boost::scoped_ptr<posix_file> fp(new posix_file("/tmp/a.txt"));
    boost::scoped_ptr<int> p(new int);
    if (p)
    {
        *p = 100;
        std::cout << *p << std::endl;
    }
    return 0;
}