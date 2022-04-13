// pattern questions
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pattern -
    // 1 1 1
    // 2 2 2
    // 3 3 3
    // int i = 1, j, n;
    // cin >> n;
    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= 3)
    //     {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // int i=1,j;
    // while(i<=4){
    //     j=1;
    //     while(j<=4){
    //         cout << 4-j+1 << " "; //for 4 3 2 1
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // int i = 1, j, c = 1;
    // while (i <= 4)
    // {
    //     j = 1;
    //     while (j <= 3)
    //     {
    //         cout << c << " ";
    //         c++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern
    // *
    // **
    // ***
    // ****

    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // pattern
    // 1
    // 22
    // 333
    // 4444

    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // 1
    // 23
    // 456

    // int i = 1, j, c = 1, rows;
    // int i = 1, j, t, rows;
    // cin >> rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << c << " ";
    //         c++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    // while (i <= rows)
    // {
    //     j = 1;
    //     //* with third variable
    //     // t = i;
    //     // while (j <= i)
    //     // {
    //     //     cout << t << " ";
    //     //     t++;
    //     //     j++;
    //     // }
    //     //* without third variable
    //     while (j <= i)
    //     {
    //         cout << j + i - 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // int i = 1, j, t, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    // with third variable
    //  t = i;
    //  while (j <= i)
    //  {
    //      cout << t << " ";
    //      t--;
    //      j++;
    //  }

    // * without third variable
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //    pattern
    //    abc
    //    bcd
    //    cde
    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= 3)
    //     {
    //         char c = 'a' + j - 1 + i - 1;
    //         cout << c;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // a
    // bb
    // ccc
    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     char c = 'a' + i - 1;
    //     while (j <= i)
    //     {
    //         cout << c;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // a
    // bc
    // cde
    // defg

    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         char c = 'a' + i - 1 + j - 1;
    //         cout<<c;
    //         j++;
    //     }
    //     cout<< endl;
    //     i++;
    // }

    // pattern
    // d
    // cd
    // bcd
    // abcd

    // int i = 1, j, rows;
    // cin >> rows;
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         char c = 'a' + rows - i + j - 1;
    //         cout << c;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // 1111
    //  222
    //   33
    //    4
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
    //         cout << i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern
    //     1
    //    22
    //   333
    //  4444
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
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern
    // 1234
    //  234
    //   34
    //    4

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
    //         cout << i + j - 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    
    return 0;


}
