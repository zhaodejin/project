/*
 * @Author: 赵德金
 * @Date: 2021-10-30 19:29:08
 * @LastEditors:
 * @LastEditTime: 2021-10-30 22:28:58
 * @Description: file content
 */
#include "Cat.h"

template <class T1, class T2>
Cat<T1, T2>::Cat(T1 name, T2 age)
{
    this->m_name = name;
    this->m_age = age;
}

template <class T1, class T2>
void Cat<T1, T2>::show()
{
    std::cout << "[name]: " << this->m_name << ": [age]: " << this->m_age << std::endl;
}

template <class T1, class T2>
void Cat<T1, T2>::bark()
{
    std::cout << "Cat barked: miao! miao! miao! " << std::endl;
}

template <class T1, class T2>
Cat<T1, T2>::~Cat(){

}