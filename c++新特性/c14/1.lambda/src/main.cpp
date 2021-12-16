#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
using namespace std;
int main()
{
    auto important = make_unique<int>(1);
    auto add = [v1 = 1, v2 = std::move(important)](int x, int y) -> int
    { return x + y + v1 + (*v2); };

    std::cout << add(4, 5) << std::endl;
}