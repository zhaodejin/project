#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/progress.hpp>
int main()
{
    std::vector<std::string> v(100);
    std::ofstream fs("./test.txt");
    boost::progress_display pd(v.size());
    for (auto it : v)
    {
        fs << it << std::endl;
        ++pd;
    }
    return 0;
}