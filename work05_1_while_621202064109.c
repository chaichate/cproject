#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sum = 0;
     int i = 1;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     while (i <= 100)
     {
          sum += i;
          i++;
     }

     printf("Sum of numbers 1-100 is %d \n", sum);


     getchar();

     return 0;
}