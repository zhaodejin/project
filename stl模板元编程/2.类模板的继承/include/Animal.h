/*
 * @Author: 赵德金
 * @Date: 2021-10-30 19:09:49
 * @LastEditors:    
 * @LastEditTime: 2021-10-30 20:57:20
 * @Description: file content
 */
#ifndef ANIMAL_H
#define ANIMAL_H
#include <bits/stdc++.h>

template <class T1, class T2>
class Animal
{
public:
    Animal<T1, T2>();
    Animal<T1, T2>(T1 name, T2 age);
    virtual void show();
    virtual void bark();
    virtual ~Animal();
private:
    T1 m_name;
    T2 m_age;
};
#endif //