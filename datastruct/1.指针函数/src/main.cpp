#include <iostream>
class classf
{
public:
    classf() {}

    double run(double x)
    {
        return 2 * x;
    }
};

double sum(classf f, int n, int m)
{
    double result = 0;
    for (int i = n; i <= m; i++)
    {
        result += f.run(i);
    }
    return result;
}
int main(int argc, char **argv)
{
    std::cout << sum(classf(), 10, 20) << std::endl;
    return 0;
}