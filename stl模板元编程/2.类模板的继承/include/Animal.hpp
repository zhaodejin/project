#include "Animal.h"

template <class T1, class T2>
Animal<T1, T2>::Animal()
{
}

template <class T1, class T2>
Animal<T1, T2>::Animal(T1 name, T2 age)
{
    this->m_name = name;
    this->m_age = age;
}

template <class T1, class T2>
Animal<T1, T2>::~Animal()
{
}

template <class T1, class T2>
void Animal<T1, T2>::show(){
     std::cout << "[name]: " << this->m_name << ": [age]: " << this->m_age << std::endl;
}

template <class T1, class T2>
void Animal<T1, T2>::bark(){
    std::cout<< "Animal barked! " <<std::endl;
}