/*
 * @Author: 赵德金
 * @Date: 2021-10-30 19:08:25
 * @LastEditors:    
 * @LastEditTime: 2021-10-30 21:05:59
 * @Description: file content
 */
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main(int argc, char **argv)
{
    Animal<std::string, int> animal;
    Animal<std::string, int> test("animal", 100);
    Cat<std::string, int> cat("cat", 12);
    Dog<std::string, int> dog("dog", 24);

    Animal<std::string, const char *> test2("animal", "100");
    Cat<std::string, const char *> cat1("cat", "12");
    Dog<std::string, const char *> dog1("dog", "24");

    test.show();
    test.bark();
    dog.show();
    dog.bark();
    cat.show();
    cat.bark();
    std::cout << std::setfill('*') << std::endl;
    test2.show();
    test2.bark();
    dog1.show();
    dog1.bark();
    cat1.show();
    cat1.bark();
    return 0;
}