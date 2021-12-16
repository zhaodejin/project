#include <iostream>
struct Base
{
    virtual void foo(int);
    virtual void foo() final;
};
struct SubClass : Base
{
};

 int main()
{
    std::cout << "hello ,c++" << std::endl;
}