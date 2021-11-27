#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <ctime>

int main()
{
    const int size{ 10 };
    int arr[size][size];
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            arr[i][j] = i + j;
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }

    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    int day = now->tm_mday;
    std::cout << "Today's day of month is: " << day << "\n";
    int rowIndex = day % size;
    std::cout << "Row index is: " << rowIndex << "\n";

    int summ{ 0 };
    for (int j = 0; j < size; ++j)
    {
        std::cout << arr[rowIndex][j];
        if (j == size - 1) std::cout << " = "; else std::cout << " + ";
        summ += arr[rowIndex][j];
    }
    std::cout << summ << "\n";
}