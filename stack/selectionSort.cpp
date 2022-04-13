// selection srot - o(n^2)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6, a[n] = {3, 1, 5, 4, 2, 0}, i, j;
    for (i = 0; i < n - 1; i++)
    {
        cout << "i = " << i;
        cout << endl;
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            cout << "j= " << j;
            cout << endl;
            if (a[min] > a[j])
                min = j;
        }
        swap(a[i], a[min]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}