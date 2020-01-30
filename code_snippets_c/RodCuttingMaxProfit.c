#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int rodCutMax(int value[501], int n)
{
    int maxP,profit;
    if (n == 0)
        return 0;

    maxP = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        profit = value[i - 1] + rodCutMax(value, n - i);
        if (profit > maxP)
            maxP = profit;
    }
    return maxP;
}

int main() {

    int n;
    int value[501];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&value[i]);
    printf("%d",rodCutMax(value,n));
    return 0;
}
