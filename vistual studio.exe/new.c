#include<stdio.h>
int main()
{
    int a=0,b=1,c,l;
    printf("enter the limit");
    scanf("%d",&l);
    for(int i=1;i<=l;i++)
    {
        printf("  %d",a);
        c=a+b;
        a=b;
        b=c;
    }
}