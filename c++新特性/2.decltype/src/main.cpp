#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
using namespace std;
template <typename _Tx, typename _Ty>
auto multiply(_Tx x, _Ty y) -> decltype(x * y)
{

    return x * y;
}
int main()
{

    std::cout << multiply(4, 5) << std::endl;
    cout << multiply(5.34, 3) << endl;
}