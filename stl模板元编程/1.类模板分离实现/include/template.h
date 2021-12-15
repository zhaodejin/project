#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <bits/stdc++.h>

template <class T1, class T2>
class Person
{
public:
    Person<T1, T2>(T1 age, T2 name);
    void Show();
    ~Person<T1, T2>();

private:
    T1 m_age;
    T2 m_name;
};
#endif