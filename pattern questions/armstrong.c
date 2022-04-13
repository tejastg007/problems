#include <stdio.h>
#include <math.h>
void main()
{
    int n, sum = 0, copy;
    scanf("%d", &n);
    copy = n;
    while (n !=0)
    {
        sum = sum + pow((n % 10), 3);
        n = n / 10;
    }
    if (sum == copy)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}