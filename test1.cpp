#include <iostream>

using namespace std;

int main(void)
{
    const int size = 10;
    int arr[size] = {};

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "x" << (i + 1) << " = " << arr[i] << endl;
    }
    cout << endl;
}