// fibonacci series
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // f s t
    // 0 1 1 2 3 5 8
    int first = 0, second = 1, third;
    cout << first << "," << second << ",";
    for (int i = 1; i <=3 ; i++)
    {
        third = first + second;
        cout << third << ",";
        first = second;
        second = third;
    }
    return 0;
}