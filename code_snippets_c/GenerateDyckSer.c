#include <stdio.h>
#include <string.h>
int checkDyck(char str[])
{
    int l;
    int check=0;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]=='X')
            check++;
        if(str[i]=='Y')
            check--;
        if(check<0)
            return check;
    }
    return check;
}

void swap(char *x,char *y)
{
    char temp;
    temp =*x;
    *x = *y;
    *y = temp;
}

int checkDup(char str[], int start, int cur) 
{ 
    for (int i = start; i < cur; i++)  
        if (str[i] == str[cur]) 
            return 0; 
    return 1; 
}

void printDyck(char str[],int l,int r)
{
    int i,check;
    if(l==r)
    {
        if(checkDyck(str)==0)
            printf("%s\n",str);
    }
    else
    {
       for(i=l;i<=r;i++)
       {
           check = checkDup(str,l,i);
           if(check)
           {
               swap((str+l),(str+i));
               printDyck(str,l+1,r);
               swap((str+l),(str+i));
           }
           
       }
    }


}

int main()
{
    int num;
    char str[100];
    scanf("%d",&num);
    num = num*2;
    if(num<1)
        return 0;
    for(int i=0;i<num/2;i++)
    {
        str[i]='X';
        str[i+num/2]='Y';
    }
    //printf("STRING = %s\n",str);
    printDyck(str,0,num-1);
}
