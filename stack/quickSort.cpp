// quick sort - o(n^2), best case - T(n) = 2T(n/2) + \theta(n)
#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int low, int high)
{
    int pivot = a[high], i = (low - 1); 
    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[j], a[i]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        // pi= partiion index. used to sort further list using pi+1 and pi-1
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}
int main()
{
    int n = 6, a[n] = {5, 4, 3, 2, 1, 0}, i, j;
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}