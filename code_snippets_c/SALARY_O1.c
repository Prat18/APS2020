#include <stdio.h>

int main(void)
{
    int T,n,arr[100],sum,min;
    scanf("%d",&T);
    while(T--)
    {
        sum=0;
        min=10000;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
            if(arr[i]<min)
            min=arr[i];
        }
            
        printf("%d",sum-n*min); 
        if(T>0)
        printf("\n");
    }
    return 0;
}
