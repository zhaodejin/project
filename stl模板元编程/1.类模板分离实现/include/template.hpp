
#include "template.h"

template <class T1, class T2>
Person<T1, T2>::Person(T1 age, T2 name)
{
    this->m_age = age;
    this->m_name = name;
}

template <class T1, class T2>
Person<T1,T2>::~Person<T1, T2>()
{
}

template <class T1, class T2>
void Person<T1,T2>::Show()
{
    std::cout << "age: " << this->m_age << " name: " << this->m_name << std::endl;
}