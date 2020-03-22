#include <stdio.h>

int main()
{
     int sum = 0, avg = 0, counter = 0;
     for (int i = 1; i <= 100; i++)
     {
          if (i % 2 != 0)
          {
               sum += i;
               counter++;
          }
     }

     avg = sum / counter;

     printf("average odd  of numbers 1-100 is %d \n", avg);

     sum = 0;
     counter = 0;
     avg = 0;
     int index = 1;

     while (index <= 100)
     {
          if (index % 2 != 0)
          {
               sum += index;
               counter++;
          }

          index++;
     }

     avg = sum / counter;
     printf("average odd  of numbers 1-100 is %d \n", avg);

     sum = 0;
     counter = 0;
     avg = 0;
     index = 1;

     do
     {
          if (index % 2 != 0)
          {
               sum += index;
               counter++;
          }
          index++;

     } while (index <= 100);

     avg = sum / counter;
     printf("average odd  of numbers 1-100 is %d \n", avg);
}