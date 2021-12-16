#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
#include <tuple>
#include <memory>
using namespace std;
void foo(std::shared_ptr<int> i)
{
    (*i)++;
}
template <typename T, typename... Args>
std::unique_ptr<T> make_unique(Args &&...args)
{
    return std::unique_ptr<T>(new T(std::forward<Args &&...>(args)...));
}
int main()
{
    auto pointer = std::make_shared<int>(10);
    foo(pointer);
    std::cout << *pointer << std::endl;

    auto pointer1 = pointer;
    auto pointer2 = pointer;
    auto pointer3 = pointer;
    int *p = pointer.get();
    std::cout << "pointer.use_count()=" << pointer.use_count() << std::endl;
    std::cout << "pointer1.use_count()=" << pointer1.use_count() << std::endl;
    std::cout << "pointer2.use_count()=" << pointer2.use_count() << std::endl;
    std::cout << "pointer3.use_count()=" << pointer3.use_count() << std::endl;

    pointer3.reset();
    std::cout << "pointer3.reset()" << std::endl;
    std::cout << "pointer3.use_count()=" << pointer3.use_count() << std::endl;
    std::cout << "pointer2.use_count()=" << pointer2.use_count() << std::endl;
    std::cout << "pointer1.use_count()=" << pointer1.use_count() << std::endl;
    std::cout << "pointer.use_count()=" << pointer.use_count() << std::endl;

    pointer2.reset();
    std::cout << "pointer2.reset()" << std::endl;
    std::cout << "pointer2.use_count()=" << pointer2.use_count() << std::endl;
    std::cout << "pointer1.use_count()=" << pointer1.use_count() << std::endl;
    std::cout << "pointer.use_count()=" << pointer.use_count() << std::endl;

    pointer1.reset();
    std::cout << "pointer1.reset()" << std::endl;
    std::cout << "pointer1.use_count()=" << pointer1.use_count() << std::endl;
    std::cout << "pointer.use_count()=" << pointer.use_count() << std::endl;

    pointer.reset();
    std::cout << "pointer.reset()" << std::endl;
    std::cout << "pointer.use_count()=" << pointer.use_count() << std::endl;

    std::unique_ptr<int> point = make_unique<int>(10);

    return 0;
}