#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    cout << arr[0] << arr[1] << arr[2] << arr[3] << endl;
    cout << arr[4] << endl;  // Какое-то рандомное число, лежащее в памяти  +  компилятор выдаст ошибку
    cout << arr << endl << endl;  // указатель на первый элемент массива


    int arr2[] = {9, 8, 7, 6, 5};
    cout << arr2[0] << arr2[1] << arr2[2] << arr2[3] << arr2[4] << endl;


    int arr3[100] = {};  // Массив из сотни нулей
}
