/*
 * @Author: 赵德金
 * @Date: 2021-10-31 14:42:55
 * @LastEditors:    
 * @LastEditTime: 2021-11-01 14:27:52
 * @Description: file content
 */
#include <iostream>
namespace name
{
    template <bool B, typename T, typename F>
    struct conditional
    {
        using type = T;
    };
    template <typename T, typename F>
    struct conditional<false, T, F>
    {
        using type = F;
    };

    template <bool B, typename T, typename F>
    using conditional_t = typename std::conditional<B, T, F>::type;
}
int main(int argc, char **argv)
{
    name::conditional<true, int, float>::type x = 3;
    name::conditional<false, int, float>::type y = 1.0f;
    return 0;
}
