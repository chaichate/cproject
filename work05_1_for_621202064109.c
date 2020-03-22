#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sum = 0;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif
     
     for (int i = 1; i <= 100; i++)
     {
          sum += i;
     }

     printf("Sum of numbers 1-100 is %d \n", sum);

     getchar();
     
     return 0;
}