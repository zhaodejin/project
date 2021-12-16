#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
#include <tuple>
#include <memory>
#include <regex>
#include <thread>
#include <bits/std_mutex.h>
int v = 1;
void critical_section(int change_v)
{
    static std::mutex mtx;
    std::lock_guard<std::mutex> lock(mtx);
    v = change_v;
}
int main()
{
    std::thread t1(critical_section, 2), t2(critical_section, 3);

    t1.join();
    t2.join();
    std::cout << v << std::endl;
    return 0;
}