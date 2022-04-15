// find peak element index from array
#include <bits/stdc++.h>
using namespace std;
int findPeak(int a[], int n)
{
    int s = 0, e = n - 1, mid;
    while (s < e)
    {
        mid = (s + e) / 2;
        if (a[mid] < a[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return a[s];
}
int main()
{
    int n = 4, a[n] = {0, 2, 1, 0};
    cout << "peak element is " << findPeak(a, n);
    return 0;
}