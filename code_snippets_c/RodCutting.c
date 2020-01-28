#include <stdio.h>

int result[10];

int max(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else 
    return c;
}
void rodCutting(int n)
{
    
    for(int i=2;i<=n;i++)
    {
        result[i]=0;
        for(int j=1;j<=i/2;j++)
        {
            result[i] = max(result[i],j*(i-j),j*result[i-j]);
        }
    }
    for( int x=0;x<n;x++)
    printf("%d\t",result[x]);
}


int main(void) {
	int n;
	scanf("%d",&n);
	rodCutting(n);
	return 0;
}

