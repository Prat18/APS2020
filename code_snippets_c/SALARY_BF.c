#include <stdio.h>

int checkEq(int arr[100],int n)
{
    for(int i=0;i<n-1;i++)
        if(arr[i]!=arr[i+1])
            return -1;
    return 1;
}

int maxIndex(int arr[100],int n)
{
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[index] <= arr[i])
            index=i;
    }
    return index;
}

int noOfTurns(int arr[100],int n){
    int count = 0,maxi;
    if(checkEq(arr,n)==1)
        return 0;
    else{
        while(checkEq(arr,n)==-1){
            //printf("Not equal\n");
            maxi=maxIndex(arr,n);
            //printf("Max Index : %d\n",maxi);
            for(int i=0;i<n;i++)
            {
                //printf("%d\t",arr[i]);
                if(i!=maxi)
                    arr[i]++;
            }
            //printf("\n");
            count++;
        }
    }
    return count;
}

int main(void)
{
    int T,n,arr[100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("%d",noOfTurns(arr,n)); 
        if(T>0)
        printf("\n");
    }
    return 0;
}
