#include <iostream>

int main()
{

    int arr[5] = {2, 69, 420, 1, -1};

    // std::cout << sizeof(arr) << std::endl;
    // std::cout << sizeof(int) << std::endl;

    int lengthArray = sizeof(arr) / sizeof(int);

    for (int i = 0; i < lengthArray; i++)
    {
        for (int j = 0; j < lengthArray - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    std::cout << "The sorted array is: " << std::endl;

    for (int i = 0; i < lengthArray; i++)
    {
        std::cout << arr[i] << "\t";
    }
    return 0;
}

// sizeof() operator returns the size of a type in bytes.