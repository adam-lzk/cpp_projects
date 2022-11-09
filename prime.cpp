// программа определяет простые числа

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a = 0, b = 0;  //  a/b

    cin >> a;

    for(b = 0; b <= a; b++) {
        if((a / b == a) && (a / b == 1)) {
            cout << a << " is prime number\n";
        } 

        /*if((a / b != a) && (a / b != 1)) {
            cout << a << " is not prime number\n";
        } */
    }
    return 0;
}