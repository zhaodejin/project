#include <iostream>
#include <functional>
#include <bits/stdc++.h>
void quickSort(int *arr);
void quickSort(int *arr)
{
    for (int j = 1; j < sizeof(arr) / sizeof(arr[0]); j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && (arr[i] > key))
        {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}
int main(int argc, char **argv)
{
    int array[10] = {5, 6, 1, 9, 10, 3, 4, 8, 2, 7}; // 1
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    for (int i = 1; i < sizeof(array) / sizeof(int); i++)
    {                       // 1
        int key = array[i]; // 2
        int j = i - 1;      // 3
        while (j >= 0 && array[j] > key)
        {                            // 4
                                     
            array[j + 1] = array[j]; // 5
            j--;                     // 6
        }
        array[j + 1] = key; // 7
    }
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    return 0;
}