// bubble sort- o(n^2)-
// passes - n-1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6, a[n] = {3, 1, 5, 4, 2, 0};

    for (int i = 0; i < n - 1; i++)
    {
        cout << "i= " << i;
        cout << endl;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "j = " << j;
            cout << endl;
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}