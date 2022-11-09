// Пример переполнения int и использования long данных

#include <iostream>

using namespace std;

int main()
{
    int a = 2147483647;  // максимальное число, которое помещается в int (2 * 10^9 = 2^31 - 1)
    cout << a << endl;

    int b = 2147483648;  // не помещается в int
    cout << b << endl;

    long c = 9223372036854775807;  // максимальное число, которое помещается в long (9 * 10^18 = 2^63 - 1)
    cout << c << endl;

    long d = 9223372036854775808;  // не помещается в long
    cout << d << endl;

    return 0;
}
