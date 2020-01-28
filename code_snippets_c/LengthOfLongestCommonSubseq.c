#include <stdio.h>
#include <string.h>
void LCS(char s1[100],char s2[100])
{
    int result[100][100]={0};
    int l1,l2;
    l1=strlen(s1);
    l2=strlen(s2);
    
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                result[i][j] = result[i-1][j-1] + 1;
            }
            else
            {
                result[i][j] = (result[i-1][j] > result[i][j-1]) ? result[i-1][j] : result[i][j-1];
            }
        }
    }
    printf("%d",result[l1][l2]);
    
}


int main(void) {
	char s1[100],s2[100];
	scanf("%s",s1);
	scanf("%s",s2);
	LCS(s1,s2);
	return 0;
}

