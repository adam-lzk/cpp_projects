#include <iostream>

using namespace std;

int main() {

    unsigned char x = 15; // = 00001111
    unsigned char notX = ~x; // = 11110000 = 255 - 15 = 240
    cout << (int)notX << endl;

    unsigned int y = 15; // = ...00001111
    unsigned int notY = ~y; // = 11111111111111111111111111110000
    cout << notY << endl;

    int z = 15; // = 01111
    int notZ = ~z; // = -10000
    cout << notZ << endl;

    return 0;
}