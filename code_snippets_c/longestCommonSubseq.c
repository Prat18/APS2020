#include <stdio.h>
#include <string.h>
void LCS(char s1[100],char s2[100])
{
    int result[100][100]={0};
    int l1,l2,index;
    l1=strlen(s1);
    l2=strlen(s2);
    char lcs[100];
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

    index=result[l1][l2];
    lcs[index]='\0';
    while (l1 > 0 && l2 > 0)
   {
      if (s1[l1-1] == s2[l2-1])
      {
          lcs[index-1] = s1[l1-1]; 
          l1--; 
          l2--; 
          index--;  
      }
      else if (result[l1-1][l2] > result[l1][l2-1])
         l1--;
      else
         l2--;
   }
    printf("%s",lcs);
    
}

int main(void) {
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    LCS(s1,s2);
    return 0;
}
