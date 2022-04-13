// pascal triange
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows - i; k++)
        {
            cout << " ";
        }
        int ans;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                ans = 1;
            else
                ans = ans * (i - j + 1) / j;
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}