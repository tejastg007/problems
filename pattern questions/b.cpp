// start patterns
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pattern
    //     *
    //    **
    //   ***
    //  ****
    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows - i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // ****
    // ***
    // **
    // *
    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows - i + 1)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // ****
    //  ***
    //   **
    //    *
    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i - 1)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     j = 1;
    //     while (j <= rows - i + 1)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // --*--
    // -*-*-
    // *-*-*
    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows - i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    //    1
    //   121
    //  12321
    // 1234321
    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     // print space
    //     while (j <= rows - i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     j = 1;
    //     int t = i - 1;
    //     while (j <= (i * 2) - 1)
    //     {
    //         if (j <= i)
    //         {
    //             cout << j;
    //         }
    //         else
    //         {
    //             cout << t;
    //             t--;
    //         }
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // patttern-
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    int i = 1, j, rows = 5;
    while (i <= rows)
    {
        int t = rows - i + 1;
        j = 1;
        while (j <= rows - i + 1)
        {
            cout << j;
            j++;
        }

        j = 1;
        while (j <= i - 1)
        {
            cout << "**";
            j++;
        }

        j = 1;
        while (j <= (rows - i + 1))
        {
            cout << t;
            t--;
            j++;
        }

        cout << endl;
        i++;
    }
    return 0;
}