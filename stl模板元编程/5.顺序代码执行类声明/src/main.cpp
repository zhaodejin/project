/*
 * @Author: 赵德金
 * @Date: 2021-10-31 14:42:55
 * @LastEditors:    
 * @LastEditTime: 2021-11-01 14:27:52
 * @Description: file content
 */
#include <iostream>
template <typename T>
struct RemoveReferenceConst_
{
private:
    using inter_type = typename std::remove_reference<T>::type;

public:
    using type = typename std::remove_reference<inter_type>::type;
};
template <typename T>
using RemoveReferenceConst = typename RemoveReferenceConst_<T>::type;

int main(int argc, char **argv)
{
    RemoveReferenceConst<const int &> h = 3;
    std::cout << h << std::endl;
    return 0;
}