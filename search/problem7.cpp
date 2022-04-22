// find pivot element-
// approch- we will rotate the array by particular elements and find the lowest element on the second line of array of graph made by values.
#include <bits/stdc++.h>
using namespace std;
int findPivot(int a[], int n)
{
    int s = 0, e = n - 1, mid;
    while (s < e)
    {
        mid = (s + e) / 2;
        if (a[mid] >= a[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int n = 5, a[n] = {1, 2, 3, 7, 9}, rotNo, t;
    cin >> rotNo;
    for (int i = 0; i < rotNo; i++)
    {
        t = a[n - 1];
        for (int j = n - 2; j >= 0; j--)
        {
            a[j + 1] = a[j];
        }
        a[0] = t;
    }

    cout << endl;
    cout << findPivot(a, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i];
    // }

    return 0;
}