#include <iostream>

using namespace std;

int main(void)
{
    const int size = 10;

    int arr1[size] = {};
    for (int i = 0; i < size; i++)
    {
        arr1[i] = i;
        cout << arr1[i];
    }
    cout <<  endl;


    int arr2[size] = {};
    cout << "enter ";
    for (int i = 0; i < size; i++)
    {
        cout << "x" << (i + 1) << ":";
        cin >> arr2[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "x" << (i + 1) << " = " << arr2[i] << endl;
    }
    cout << endl;
}
