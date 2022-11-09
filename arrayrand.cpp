// Вывод массива, заполненного рандомными числами от 0 до 9, повторяющемися не более 1 раза

#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];
    bool exist = false;

    for (int i = 0; i < SIZE;)
    {
        int randValue = rand() % SIZE;
        exist = false;

        for (int j = 0; j < i; j++)
        {
            if (arr [j] == randValue)
            {
                exist = true;
                break;
            }
        }

        if (exist == false)
        {
            arr [i] = randValue;
            i++;
        }
    }

    for (int i = 0; i < SIZE; i++)
        cout << arr [i] << endl;

}
