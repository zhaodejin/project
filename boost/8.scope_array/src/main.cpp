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
    int *arr = new int[100];
    boost::scoped_array<int> sa(arr);
    std::fill_n(&sa[0], 100, 5);
    sa[10] = sa[20] + sa[30];
    std::cout << sa[10] << std::endl;
    return 0;
}