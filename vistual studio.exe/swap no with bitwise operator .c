#include<stdio.h>
int main()
{  
    int a,b;
    printf("enter the value of first no  ");
    scanf("%d",&a);
    printf("enter the value of second no ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    printf("%d is second \n",b);
    a=a-b;
    printf("%d is first",a);
    
}