#include <stdio.h>
int main(void) 
{
	int T,N,C;
	scanf("%d",&T);
	while(T--)
  {
    	int k,remc,sum=0;
	    int arr[10000];
	    scanf("%d %d",&N,&C);
	    remc=C;
	    for(k=0;k<N;k++)
      {
	        scanf("%d ",&arr[k]);
	        sum += arr[k];
	        remc -= arr[k];
	    }
	    if(sum>C)
      printf("No\n");
	    else if(remc>=0)
      printf("Yes\n");
	    else 
      printf("No\n");
	}
	return 0;
}
