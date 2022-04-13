// binary to decimal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, decimal = 0, i = 0;
    cin >> n;
    // 1011 -> 11
    while (n != 0)
    {
        if (n % 10)
        {
            decimal = decimal + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << endl
         << decimal << endl;
    return 0;
}