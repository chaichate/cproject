#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sum = 0;
     int index = 1;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     do
     {
       sum += index ;
       index++;

     } while (index <= 100);
     
     printf("Sum of numbers 1-100 is %d \n" , sum);

     getchar();

     return 0;
}