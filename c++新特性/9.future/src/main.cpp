#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
#include <tuple>
#include <memory>
#include <regex>
#include <thread>
#include <bits/std_mutex.h>
#include <future>
#include <utility>
#include <binders.h>
#include <functional>

int add(int x, int y)
{
    return x + y;
}
int plus(int n)
{
    auto funct = std::bind(add, std::placeholders::_1, 100);
    return funct(n);
}
int main()
{

    std::packaged_task<int()> task([]() -> int
                                   { plus(13); });
    std::future<int> result = task.get_future();
    std::thread(std::move(task)).detach();
    std::cout << "waiting" << std::endl;
    result.wait();
    std::cout << "done!" << std::endl
              << "futute result is " << result.get() << std::endl;
}