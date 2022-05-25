#include<stdio.h>
int main()
{
 int a,b;
 char ch;
 
 printf("select a for add \n s for subtract \n m for multiply \n d for devide   \n");
 scanf("%c",&ch);
 switch (ch)
 {
   case 'a':
   printf("enter first no");
   scanf("%d",&a);
   printf("enter second number");
   scanf("%d",&b);
  
     printf("addition is : %d",a+b);
     break;
   case 's':
   printf("enter first no");
 scanf("%d",&a);
 printf("enter second number");
 scanf("%d",&b);
    printf("subtraction is :%d",a-b);
    break;
   case'm':
   printf("enter first no");
 scanf("%d",&a);
 printf("enter second number");
 scanf("%d",&b);
    printf("multiplication is :%d",a*b);
    break;
   case'd':
   printf("enter first no");
 scanf("%d",&a);
 printf("enter second number");
 scanf("%d",&b);
    printf("division is : %d",a/b);   
    break;
 
     default:
    printf("invalid input");
     break;
 }

    
}