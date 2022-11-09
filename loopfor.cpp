// Вывод цифр от 0 до 100
// Вывод "hello" 50 раз

#include<iostream>

using namespace std;

int main()
{
    for (int x = 0; x <= 100; x++)  // цикл выполняеися до тех пор, пока x <= 100
    {
        cout << x << endl;
    }


    for (int x = 0; x <= 50; x++)
    {
        cout << "hello\n";
    }

    return 0;
}
