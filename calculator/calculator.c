#include<stdio.h>
#include"calculator.h"
int main()
{
  
}
    int div (int num1, int num2)
   {
    if(num2==0)
      return 0;
    return num1/num2;
    } 
int sub (int num1, int num2)
{
    if(num2<=num1)
      return 0;
    else
    return num1-num2;
}
int add (int num1, int num2)
{
    return num1+num2;
}


