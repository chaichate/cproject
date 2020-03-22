#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sum = 0, avg = 0, counter = 0;
     int i = 1;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif
     

     while (i <= 100)
     {
          if (i % 2 != 0)
          {
               sum += i;
               counter++;
          }

          i++;
     }


     avg = sum / counter;

     printf("average odd  of numbers 1-100 is %d \n", avg);

     getchar();
     
     return 0;
}