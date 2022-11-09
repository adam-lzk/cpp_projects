// Сравнение двух чисел

#include <iostream>

using namespace std;
 
int main()
{
    int a, b;
    cout << "Ввдите первое число: ";
    cin >> a;
    cout << "Ввклите второе число: ";
    cin >> b;
    if (a > b)
    {
        cout << a << " > " << b << endl;
    } 
    
    if (a < b)
    {
        cout << a << " < " << b << endl;    
    }
    
    if (a == b)
    {
        cout << a << " = " << b << endl;    
    }
    return 0;
}
