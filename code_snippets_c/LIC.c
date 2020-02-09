#include <stdio.h>
int main(void)
{
    int arr[100],LIC[100]={1};
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=1;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j] < arr[i] && LIC[j]+1 > LIC[i])
                LIC[i] = LIC[j]+1;
        }
    }
    printf("Length of Longest Increasing Subsequence : %d",LIC[n-1]);
}