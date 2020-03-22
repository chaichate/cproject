#include <stdio.h>

int main()
{
     int sum = 0;
     for (int i = 1; i <= 100; i++)
     { 
          sum += i;
     }

     printf("Sum of numbers 1-100 is %d \n" , sum);

     sum = 0;
     int index =1;
     while (index <= 100)
     {
          sum += index ;
          index++;          
     }
     
     printf("Sum of numbers 1-100 is %d \n" , sum);


     sum = 0;
     index = 1;
     do
     {
       sum += index ;
       index++;

     } while (index <= 100);
     
     printf("Sum of numbers 1-100 is %d \n" , sum);

}