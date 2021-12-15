/*
 * @Author: 赵德金
 * @Date: 2021-10-30 19:16:06
 * @LastEditors:    
 * @LastEditTime: 2021-10-30 20:46:43
 * @Description: file content
 */
#ifndef DOG_H
#define DOG_H
template <class T1, class T2>
class Dog:public Animal<T1, T2> {
public:
    Dog<T1, T2>(T1 name, T2 age);
    ~Dog();
    void show();
    void bark();
private:
    T1 m_name;
    T2 m_age;
};
#endif