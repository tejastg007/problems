// bubble sort
//  passes- n-1
//  compare every element with next and swap by order.
//  this way, the largest element will be placed at the end by each pass.
// time comp- o(n^2);
#include <bits/stdc++.h>
using namespace std;
int printA(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
int main()
{
    int n = 6, a[n] = {5, 4, 3, 2, 1, 8};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j + 1] < a[j])
                swap(a[j], a[j + 1]);
        }
    }

    printA(a, n);
    return 0;
}