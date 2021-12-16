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

std::string operator"" _str(const char *str,size_t len)
{ return std::string(str)+"woooooooooow,amazing...";}

std::string operator"" _str2(unsigned long long len)
{ return std::to_string(len)+"woooooooooow,amazing...";}
int main()
{
   auto str="abc_"_str;
   std::cout<<str<<std::endl;
   auto num=11232_str2;
   std::cout<<num<<std::endl;
}