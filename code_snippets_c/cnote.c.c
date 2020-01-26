#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y,K,N,pages,check;
	    int p,c;
	    check=0;
	    scanf("%d %d %d %d",&X,&Y,&K,&N);
	    pages=X-Y;
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d %d",&p,&c);
	        if(p>=pages && c<=K)
	        check=1;
	    }
	    if(check)
	    printf("LuckyChef\n");
	    else
	    printf("UnluckyChef\n");
	}
	return 0;
}

