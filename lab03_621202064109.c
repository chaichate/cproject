#include<stdio.h>

 int main()
{
     int number1 , number2 , result ;
     printf("Please enter the first number : ");
     scanf("%d",&number1);

     printf("Please enter the second number : ");
     scanf("%d",&number2);

     result = number1 + number2 ;

     printf("Sum of %d AND %d is %d   \n" , number1 , number2 ,result);

     return 0;
}

