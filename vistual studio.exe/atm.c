#include<stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("enter initial amount\n");
    scanf("%f",&x);
    printf("enter \n c for credit \n d for debit \n b for balance");
    scanf("\n%c",&ch);
    
    switch(ch)
    {
        case 'c':
             printf("enter credit amount \n");
             scanf("%f",&y);
             x=x+y;
             printf("new amount=%f",x);
             break;
        case 'd':
             printf("enter debit amount");
             scanf("%f",&y);
             if(x>=y)
             {
              x=x-y;
             printf("new amount=%f",x);
             }
             else
             {
                 printf("insufficent amount in your account");
             }
             break;
        default:
             printf("choose correct option for operation");
             
        
        return 0;
    }
}
