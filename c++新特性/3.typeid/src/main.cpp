#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
#include <typeinfo>
using namespace std;
class Base
{
public:
    void print()
    {
        cout << "test" << endl;
    }
    ~Base()
    {
    }
};
struct STU
{
};
int main()
{
    int n = 100;
    const type_info &nInfo = typeid(n);
    cout << nInfo.name() << "|" << nInfo.hash_code() << endl;

    const type_info &dInfo = typeid(23.54);
    cout << dInfo.name() << "|" << dInfo.hash_code() << endl;

    Base obj;
    const type_info &objInfo = typeid(obj);
    cout << objInfo.name() << "|" << objInfo.hash_code() << endl;

    const type_info &baseInfo = typeid(Base);
    cout << baseInfo.name() << "|" << baseInfo.hash_code() << endl;

    const type_info &stuInfo = typeid(STU);
    cout << stuInfo.name() << "|" << stuInfo.hash_code() << endl;

    const type_info &charInfo = typeid(char);
    cout << charInfo.name() << "|" << charInfo.hash_code() << endl;

    const type_info &expInfo = typeid(20 * 45 / 4.5);
    cout << expInfo.name() << "|" << expInfo.hash_code() << endl;

    Base test;
    if (typeid(test).before(typeid(obj)))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}