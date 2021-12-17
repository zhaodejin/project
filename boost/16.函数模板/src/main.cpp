#include <iostream>
#include <boost/function.hpp>
#include <typeinfo>
#include <string.h>
#include <stdlib.h>
#include <boost/bind.hpp>
#define BOOST_SYSTEM_NO_DEPRECATION
int f1(int);

short f2(short);
int f1(int n)
{
    printf("%d\n", n);
    return 0;
}

short f2(short n)
{
    printf("%d\n", n);
    return 0;
}
class Base
{
};
template <typename T>
struct functor
{ //仿函数，形式int(int )
    T operator()(T _arg)
    {
        const std::type_info &nInfo = typeid(_arg);
        std::cout << "functor<" << nInfo.name() << "> :value: "
                  << " " << std::endl;
        return _arg;
    }
};
functor<int> f3;
functor<const char *> f4;
functor<Base> f5;
int main()
{
    boost::function<int(int)> func;
    boost::function<const char *(const char *)> funcCH;
    boost::function<Base(Base)> funcBase;
    func = f1;
    func(10);
    func = f2;
    func(11);
    func = f3;
    func(12);
    funcCH = f4;
    funcCH("4353");
    Base base;
    funcBase = f5;
    funcBase(base);
    boost::function<int(const char *)> f = atoi;

    boost::function<char *(const char *)> f1;
    std::cout << f("1232") << std::endl;
    f = strlen;
    std::cout << f("1232") << std::endl;
    char *boostmaclloc = (char *)malloc(sizeof(char) * 1024);
    f1 = boost::bind(strcat, boostmaclloc, _1);
    std::cout << f1("1232") << std::endl;
    std::cout << f1("humanda") << std::endl;
    memset(boostmaclloc, 0, 0);
    return 0;
}