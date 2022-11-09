// Вывод чисел Фибоначчи

#include <iostream>

using namespace std;

int main(void)
{
    unsigned int number = 0, previousNumber = 1, buff = 0;

    for (int i = 1; i <= 48; i++)
    {
        buff = number;
        number += previousNumber;
        previousNumber = buff;
        cout << previousNumber << ", ";
    }
}
