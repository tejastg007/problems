// sort 012
#include <bits/stdc++.h>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
int main()
{
    int n = 9, a[n] = {1, 0, 1, 2, 1, 2, 2, 0, 0}, i = 0, j = n - 1, k = j;

    while (i < j)
    {
        int t = n - 1;
        // if (a[i] == 0)
        while (i < t)
        {

            if (a[i] > a[t])
            {
                swap(a[i], a[t]);
                break;
            }
            t--;
        }

        k = n - 1;
        // if (a[i] != 0)
        while (i < k)
        {
            if (a[i] > a[k])
            {
                swap(a[i], a[k]);
                break;
            }
            k--;
        }
        i++;
    }

    cout << "final answer - > ";
    print(a, n);
    return 0;
}
