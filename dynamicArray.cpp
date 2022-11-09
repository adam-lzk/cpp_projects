#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a positive integer: ";
    int length;
    cin >> length;
 
    int *array = new int[length]; // используем оператор new[] для выделения массива. Обратите внимание, переменная length не обязательно должна быть константой!
 
    cout << "I just allocated an array of integers of length " << length << '\n';
 
    array[0] = 7; // присваиваем элементу под индексом 0 значение 7
 
    delete[] array; // используем оператор delete[] для освобождения выделенной массиву памяти
    array = 0; // используйте nullptr вместо 0 в C++11
 
    return 0;
}
