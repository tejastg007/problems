// first and last position of element in sorted array
#include <bits/stdc++.h>
using namespace std;
int findFirstPos(int a[], int n, int el)
{
    int s = 0, e = n - 1, mid, c = -1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (el == a[mid])
        {
            c = mid;
            e = mid - 1;
        }
        else if (el > a[mid])
        {
            s = mid + 1;
        }
        else if (el < a[mid])
        {
            e = mid - 1;
        }
    }
    return c;
}
int findLastPos(int a[], int n, int el)
{
    int s = 0, e = n - 1, mid, c = -1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (el == a[mid])
        {
            c = mid;
            s = mid + 1;
        }
        else if (el > a[mid])
        {
            s = mid + 1;
        }
        else if (el < a[mid])
        {
            e = mid - 1;
        }
    }
    return c;
}
int main()
{
    int n = 8, a[n] = {1, 2, 2, 3, 3, 3, 4, 5}, el;
    cin >> el;
    cout << endl;
    cout << "start position = " << findFirstPos(a, n, el);
    cout << endl;
    cout << "end position = " << findLastPos(a, n, el);
    return 0;
}