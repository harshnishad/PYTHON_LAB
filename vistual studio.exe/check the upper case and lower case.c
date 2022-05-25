#include<stdio.h>
int main()
{
  char ch;
  printf("enter a character to check wheather the character is a lower case and upper case \n");
  scanf("%c",&ch);
  if(ch>=65 && ch<=90)
  {
    printf("upper case");
  }

  else
  {
    printf("lower case");
  }
  
}