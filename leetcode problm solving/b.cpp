// to check if the number is power of 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n, c = 0;
    // cin >> n;
    // while (n != 0)
    // {
    //     if (n & 1)
    //         c++;
    //     n = n >> 1;
    // }
    // if (c > 1)
    //     cout << "not";
    // else
    //     cout << "yes";

    // other method- bruteforce
    // int n, f = 0;
    // cin >> n;
    // for (int i = 0; i <= 30; i++)
    // {
    //     if (n == pow(2, i))
    //     {
    //         f = 1;
    //         break;
    //     }
    // }
    // if (f)
    //     cout << "true";
    // else
    //     cout << "false";

    // other method to add previous answer to new one
    // int n, ans = 1, f = 0;
    // cin >> n;
    // for (int i = 1; i <= 32; i++)
    // {
    //     if (ans == n)
    //     {
    //         f = 1;
    //         break;
    //     }
    //     if (ans < INT_MAX / 2)
    //         ans = ans * 2;
    // }
    // if (f)
    //     cout << "true";
    // else
    //     cout << "false";

    // other easy method
    // int n;
    // cin >> n;
    // if (n == 0)
    // {
    //     cout << "false";
    //     exit(0);
    // }
    // while (n % 2 == 0)
    // {
    //     n = n / 2;
    // }
    // if (n == 1)
    //     cout << "true";
    // else
    //     cout << "false";

    // solution with bit manipualation
    // int n;
    // cin >> n;
    // if (n <= 0)
    //     cout << 0;
    // else
    //     cout << ((n & (n - 1)) == 0);
    return 0;
}