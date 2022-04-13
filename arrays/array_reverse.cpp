// reverse an array withut using second array
#include <bits/stdc++.h>
using namespace std;
int revArray(int a[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    }
    return 0;
}
int printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "your array is = " << endl;
    printArray(a, n);
    revArray(a, n);
    cout << "reverse array is = " << endl;
    printArray(a, n);

    return 0;
}