// вывод n первых цифр дробной части числа double

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double d = 10.53446;
    double v = 1.2;
    double u = 3;

    cout << d << endl;
    cout << fixed << setprecision(5) << d << endl;
    cout << fixed << setprecision(4) << d << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(2) << d << endl;
    cout << fixed << setprecision(1) << d << endl;
    cout << d << endl << endl;

    cout << v << endl;
    cout << fixed << setprecision(5) << v << endl;
    cout << fixed << setprecision(4) << v << endl;
    cout << fixed << setprecision(3) << v << endl;
    cout << fixed << setprecision(2) << v << endl;
    cout << fixed << setprecision(1) << v << endl << endl;

    cout << u << endl;
    cout << fixed << setprecision(5) << u << endl;
    cout << fixed << setprecision(4) << u << endl;
    cout << fixed << setprecision(3) << u << endl;
    cout << fixed << setprecision(2) << u << endl;
    cout << fixed << setprecision(1) << u << endl << endl;

    cout << u + v << endl;
    cout << fixed << setprecision(5) << u + v << endl;
    cout << fixed << setprecision(4) << u + v << endl;
    cout << fixed << setprecision(3) << u + v << endl;
    cout << fixed << setprecision(2) << u + v << endl;
    cout << fixed << setprecision(1) << u + v << endl << endl;

    cout << u * v << endl;
    cout << fixed << setprecision(5) << u * v << endl;
    cout << fixed << setprecision(4) << u * v << endl;
    cout << fixed << setprecision(3) << u * v << endl;
    cout << fixed << setprecision(2) << u * v << endl;
    cout << fixed << setprecision(1) << u * v << endl << endl;

    return 0;
}