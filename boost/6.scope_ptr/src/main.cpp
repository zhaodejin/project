#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/progress.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/smart_ptr.hpp>
int main()
{
    boost::scoped_ptr<std::string> sp(new std::string("text"));
    assert(sp);
    assert(sp!=nullptr);
    std::cout<<*sp<<std::endl;
    std::cout<<sp->size()<<std::endl;
    return 0;
}