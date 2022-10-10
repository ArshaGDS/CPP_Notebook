#include <iostream>

void PrintArray(int Array[])
{        
    for (int index{}; index < 5; index++)
    {
        std::cout << Array[index] << " . ";
    }
    std::cout << std::endl;    
}

int main()
{              
    int array1[5] {1, 2, 3, 4, 5};
    int array2[5] {6, 7, 8, 9, 0};

    int* arr1Ptr {array1};
    int* arr2Ptr {array2};
    int* temp;

    PrintArray(arr1Ptr);
    PrintArray(arr2Ptr);

    temp = arr1Ptr;
    arr1Ptr = arr2Ptr;
    arr2Ptr = temp;

    PrintArray(arr1Ptr);
    PrintArray(arr2Ptr);
}
