#include <iostream>  // for std::cout
#include <utility>   // for std::pair
#include <algorithm> // for std::for_each
#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <boost/ref.hpp>
#include <vector> //
#include <boost/thread.hpp>
#include <mutex>
void print(std::ostream &os, int i)
{
    os << i << std::endl;
}
void test(std::vector<int> Vec)
{
    std::cout << " fork thread [" << gettid() << "]" << std::endl;
    boost::function<void(int)> pt = boost::bind(print, boost::ref(std::cout), _1);
    Vec.push_back(6);
    Vec.push_back(7);
    Vec.push_back(8);
    Vec.push_back(9);
    Vec.push_back(10);
    std::for_each(Vec.begin(), Vec.end(), pt);
}
int main(int, char *[])
{
    boost::function<void(int)> pt = boost::bind(print, boost::ref(std::cout), _1);
    std::cout << " main thread [" << gettid() << "]" << std::endl;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    std::for_each(v.begin(), v.end(), pt);
    static std::mutex mtx;

    std::lock_guard<std::mutex> lock(mtx);
    boost::thread t(test, v);
    t.join();
    return 0;
}