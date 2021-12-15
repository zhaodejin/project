/*
 * @Author: 赵德金
 * @Date: 2021-10-30 19:29:40
 * @LastEditors:    
 * @LastEditTime: 2021-10-30 22:29:21
 * @Description: file content
 */
#include "Dog.h"

template <class T1, class T2>
Dog<T1, T2>::Dog(T1 name, T2 age)
{
    this->m_name = name;
    this->m_age = age;
}

template <class T1, class T2>
void Dog<T1, T2>::show()
{
     std::cout << "[name]: " << this->m_name << ": [age]: " << this->m_age << std::endl;
}
template <class T1, class T2>
void Dog<T1, T2>::bark()
{
    std::cout << "Dog barked: wang! wang! wang! " << std::endl;
}
template <class T1, class T2>
Dog<T1, T2>::~Dog(){

}