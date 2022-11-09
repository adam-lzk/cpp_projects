// Генерация случайных чисел

#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(NULL));  // при изменении аргумента srand() меняется значение rand()
                        // time() - подсчет времени
                        // NULL - момент времени = 1 января 1970 года
                        // time(NULL) - время в секундах с 1 января 1970 года
    int a = rand();  // генерация числа от 0 до RAND_MAX = 32767 (но не факт)
    cout << a << endl;

    a = rand() % 50;  // генерация числа от 0 до 49 включительно
    cout << a << endl;

    a = rand() % 50 + 10;  // генерация числа от 10 до 49 включительно
    cout << a << endl;
}