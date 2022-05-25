#include<stdio.h>
int main()
{
    int a=15;
    int b;
    printf("enter a no");
    scanf("%d",&b);
    int j=0;
    for(int i=1;i<=b;i++)
    {
     j+=16;
    }
    printf("%d",j);
}
