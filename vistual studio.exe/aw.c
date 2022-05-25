#include<stdio.h>
int main()
    {
        int a,temp,i,sum=0;
        printf("enter no to check");
        scanf("%d",&a);
        temp=a;
        for(i=1;i<a;i++)
        {
            if(a%i==0)  
            {
                sum=sum+i;
            }
        }
        if(temp==sum)
        {
            printf("perfect number");
        }
        else
        {
            printf("not perfect");
        }
    } 