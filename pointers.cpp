#include <iostream>
using namespace std;

int main()
{
    int x = 42;

    int *ptr = &x;

    int *p1;
    p1 = &x;

    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    // cout << &ptr << endl;

    *ptr = 100;
    cout << "After changing pointer value" << endl;
    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    // both values change

    // *pointer arithmetic

    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl; // this prints an address

    int *newPtr = arr; // hence this means pointer has address of first element of the array
    cout << "Allocation of the array is as follows: " << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << newPtr << endl;
        newPtr++; // pointer shifts to next element of the array
    }
    newPtr += 1293893847;
    cout << "Address of random pointer is " << newPtr << endl;
    cout << "Value of random pointer is " << *newPtr << endl;

    return 0;
}

// pointers are used to store memory addresses of data and data structures, rather than values.
// understanding pointers is crucial for dynamic memory allocation, data manipulation and optimizing memory usage

// each variable in a program is stored inside a memory, which has a particular address

// dereferencing a pointer means accessing the value that is stored at the memory location pointed to by the pointer
