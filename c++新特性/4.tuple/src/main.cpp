#include <iostream>
#include <utility>
#include <bits/unique_ptr.h>
#include <tuple>
using namespace std;

std::tuple<float, char, std::string> get_student(int id)
{
    if (id == 0)
    {
        return std::make_tuple(3.4, 'A', "张三");
    }
    if (id == 1)
    {
        auto score = 1.2;
        auto raw = 'B';
        auto name = "李四";
        return std::make_tuple(score, raw, name);
    }
}
int main()
{
    // int id;
    // std::tuple<float, char, std::string> tuple1 = get_student(0);
    // std::tuple<float, char, std::string> tuple2 = get_student(1);
    // scanf("请输入:%d", &id);
    // switch (id)
    // {
    // case 0:
    //     cout << "GPA:" << std::get<0>(tuple1) << ","
    //          << "成绩：" << std::get<1>(tuple1) << ","
    //          << "姓名:" << std::get<2>(tuple1) << endl;
    //     break;
    // case 1:
    //     cout << "GPA:" << std::get<0>(tuple2) << ","
    //          << "成绩：" << std::get<1>(tuple2) << ","
    //          << "姓名:" << std::get<2>(tuple2) << endl;
    //     break;
    // default:
    //     break;
    // }
    double gpa;
    char grade;
    std::string name;
    std::tie(gpa, grade, name) = get_student(1);
    std::cout << "ID:1,"
              << "GPA:" << gpa << ","
              << "成绩:" << grade << ","
              << "姓名:" << name << "\n";
    std::tuple<float, char, std::string> tuple2 = get_student(1);
    cout << "GPA:" << std::get<0>(tuple2) << ","
         << "成绩：" << std::get<1>(tuple2) << ","
         << "姓名:" << std::get<2>(tuple2) << endl;
    return 0;
}