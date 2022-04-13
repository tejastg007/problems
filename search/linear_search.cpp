// linear search
#include <bits/stdc++.h>
using namespace std;
int lSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i + 1;
    }
    return 0;
}
int main()
{
    int n, key;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter key" << endl;
    cin >> key;
    int pos = lSearch(a, n, key);
    if (pos)
    {
        cout << "found at " << pos;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}