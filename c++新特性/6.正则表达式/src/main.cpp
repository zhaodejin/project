#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
#include <tuple>
#include <memory>
#include <regex>
int main()
{
    std::string fnames[] = {"foo.txt", "bar.txt", "test", "a0.txt", "AAA.txt"};
    std::regex txt_regex("[a-z]+\\.txt");
    for (const auto &fname : fnames)
    {
        std::cout << fname << ":" << std::regex_match(fname, txt_regex) << std::endl;
    }
    return 0;
}