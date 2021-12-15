#include <iostream>
#include <functional>
template <typename T>
struct negate : public std::unary_function<T, T>
{
    T operator()(const T &x) const
    {
        return -x;
    }
};
template <class F>
double sum(F f, int n, int m)
{
    double result = 0;
    for (int i = n; i <= m; i++)
    {
        {
            result += f(i);
        }
        return result;
    }
}
int main(int argc, char **argv)
{
    std::cout << sum(negate<double>(),1, 5) << std::endl;
    return 0;
}