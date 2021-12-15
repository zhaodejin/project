/*
 * @Author: 赵德金
 * @Date: 2021-10-31 14:42:55
 * @LastEditors:    
 * @LastEditTime: 2021-11-01 14:27:52
 * @Description: file content
 */
#include <iostream>


template <int... Vals> struct IntContainer;
template <bool... Vals> struct BoolContainer;
template <typename... Types> struct TypeContainer;

template <template <typename> class...T> struct TypeplateCont;
template <template <typename...> class...T> struct TypeplateCont2;
template <typename T>
void fun(const T &t)
{
    std::cout << t << '\n';
}
template <typename T, typename... Args>
void fun(const T &t, Args... args)
{
    std::cout << t << ',';
    fun(args...);
}

int main()
{
    fun<int,const char*,std::string,bool,float>(1,"fds","zhaodejin",0,0.1f);

    return 0;
}