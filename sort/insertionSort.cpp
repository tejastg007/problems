// insertion sort  = similar to card game
//  pick the element and place it in the correct posstion. and move every large element to one place right side.
//  the array is divied into sorted and non sorted parts. First, we pick the second elemt and compare it with previosu elemnts startin from immediate previous element. if the key elemnt is less than its immediate previous elemtn, continue to compare the key element with all previous elements one by one. Once the key elennt is less than the previous element but greater than the previous of previous, place it in between and all larger elememts than key to right place by one position,
//  time complexity- o(n^2)

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
    int n = 5, a[n] = {5, 4, 3, 2, 1};
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = a[i];
        while (j >= 0 && key < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        cout << endl;
        printA(a, n);
    }
    // printA(a, n);
    return 0;
}