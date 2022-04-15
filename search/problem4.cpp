// book allocation problem- https://www.codingninjas.com/codestudio/problem-details/allocate-books_1090540
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int a[], int n, int studs, int mid)
{
    int pageSum = 0, studCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + a[i] <= mid)
        {
            pageSum += a[i];
        }
        else
        {
            studCount++;
            if (studCount > studs)
            {
                return false;
            }
            pageSum = a[i];
        }
    }
    return true;
}
int findMin(int a[], int n, int studs)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    int s = 0, e = sum, mid, ans;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (isPossible(a, n, studs, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n = 4, a[n] = {12, 34, 67, 90}, studs = 2;
    cout << findMin(a, n, studs);
    cout << endl;
    return 0;
}