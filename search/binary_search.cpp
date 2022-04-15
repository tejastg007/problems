// binary search when array is already sorted
#include <bits/stdc++.h>
using namespace std;
int bSearch(int a[], int n, int el)
{
    int s = 0, e = n - 1, mid;
    while (s <= e)
    {
        // mid = (s + e) / 2;
        mid = s + (e - s) / 2; // this formula is used to make sure addition of s+e is not more than INT_MAX
        if (a[mid] == el)
            return mid;
        else if (el > a[mid])
            s = mid + 1;
        else if (el < a[mid])
            e = mid - 1;
        else
            return -1;
    }
    return 0;
}
int main()
{
    int n = 8, a[n] = {1, 2, 3, 4, 5, 6, 7, 8}, el;
    cin >> el;
    cout << endl;
    cout << "index is " << bSearch(a, n, el);
    return 0;
}