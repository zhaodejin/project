#include <iostream>
#include "template.hpp"

int main(int argc, char **argv)
{
    Person<int,std::string> p1(12,"赵德金");
    Person<int,const char*> p2(23,"赵德金");
    Person<std::string,int> p3("23",23);
    p1.Show();
    p2.Show();
    p3.Show();
    return 0;
}