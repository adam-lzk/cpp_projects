#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n, count = 0, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
            sum += i;

        count = 0;
    }
    cout << sum << endl;
}
