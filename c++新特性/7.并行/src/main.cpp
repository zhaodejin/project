#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
#include <tuple>
#include <memory>
#include <regex>
#include <thread>
int main()
{
    std::thread t([]()
                  { std::cout << "hello world!" << std::endl; });
    t.join();
    return 0;
}