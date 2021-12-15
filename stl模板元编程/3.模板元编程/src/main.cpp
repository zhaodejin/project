/*
 * @Author: 赵德金
 * @Date: 2021-10-30 22:19:19
 * @LastEditors:
 * @LastEditTime: 2021-10-31 12:03:18
 * @Description: file content
 */
#include <iostream>
#include <type_traits>

template <typename T>
struct Fun_
{
    using type = T;
};
template <>
struct Fun_<int>
{
    using type = unsigned int;
};
template <>
struct Fun_<long>
{
    using type = unsigned long;
};
Fun_<int>::type h = 3; //定义了一个返回类型为int的元函数

/**
 * @description: @brief  定义一个元函数Fun
 */

template <typename T>
using Fun1 = typename Fun_<T>::type;
Fun1<int> h1 = 3;

// static int call_count = 3;
// constexpr int func2(int a)
// {
//     return a + (call_count++); @ref expression ‘(call_count ++)’ is not a constant-expression
// }

constexpr int function(int a)
{
    return a + 1;
}
template <template <typename> class T1, typename T2>
struct Test_
{
    using type = typename T1<T2>::type;
};
template <template <typename> class T1, typename T2>
using Test = typename Test_<T1, T2>::type;
Test<std::remove_reference, int &> h2 = 3;

//模板作元函數的輸出
template <bool AddOrRemoveRef>
struct Fun_t;
template <>
struct Fun_t<true>
{
    template <typename T>
    using type = std::add_lvalue_reference<T>;
};
template <>
struct Fun_t<false>
{
    template <typename T>
    using type = std::remove_reference<T>;
};

template <typename T>
struct Fun
{
    using type = int;
};
constexpr int fun2()
{
    return 10;
}
template <typename T>
struct Fun_muti_value
{
};
template <>
struct Fun_muti_value<int>
{
    using reference_type = int &;
    using const_reference_type = const int &;
    using value_type = int;
};
int main(int argc, char **argv)
{
    std::cout << function(11) << std::endl;
    std::cout << h2 << std::endl;
    return 0;
}