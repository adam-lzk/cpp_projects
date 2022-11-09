#include <iostream>

using namespace std;

int main() {

    unsigned char x = 153; // = 10011001
    unsigned char notx = ~x; // (не x) = 01100110 = 102

    cout << (int)notx << endl;

    return 0;
}