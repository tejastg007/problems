// insertion sort- o(n^2)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6, a[n] = {3, 2, 5, 4, 1, 0}, i, j;
    for (i = 1; i < n; i++)
    {
        cout << "i =" << i;
        cout<<endl;
        int key = a[i];
        for (j = i - 1; j >= 0 && a[j] > key; j--)
        {
            cout << "j = " << j;
            cout << endl;
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}