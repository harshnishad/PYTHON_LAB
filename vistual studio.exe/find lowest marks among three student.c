#include<stdio.h>
int main()
{  
    int a,b,c;
    printf("enter the value of first student no  ");
    scanf("%d",&a);
    printf("enter the value of second student no ");
    scanf("%d",&b);
    printf("enter the third student no ");
    scanf("%d",&c);
    if(a<b&&a<c)
    {
    printf("first st0udent is gain lowest marks");
    }
    else if(b<a&&b<c)
    {
        printf("second student gain lowest marks");

    }
    else
    printf("third student gain lowest marks");
}