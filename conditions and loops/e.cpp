// prime of not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 2,flag=1;
    cin >> n;
    while (i <= ((int)n / 2))
    {
        if (n % i == 0)
        {
            flag=0;
            break;
        }
        i++;
    }

    if(flag==1)
        cout<<"prime";
    else
        cout<<"not prime";
    return 0;
}