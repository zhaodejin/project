/*
 * @Author: 赵德金
 * @Date: 2021-10-30 19:15:55
 * @LastEditors:    
 * @LastEditTime: 2021-10-30 20:55:05
 * @Description: file content
 */
#ifndef CAT_H
#define CAT_H
#include "Animal.h"

template <class T1, class T2>
class Cat:public Animal<T1,T2>
{
public:
    Cat<T1,T2>(T1 name, T2 age);
    ~Cat();
    void show();
    void bark();
private:
    T1 m_name;
    T2 m_age;
};
#endif