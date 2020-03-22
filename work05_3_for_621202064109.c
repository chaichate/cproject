#include <stdio.h>
#include <stdlib.h>

int main()
{
     int result = 0;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif
     
     printf("Multiplication table \n");

     for (int i = 1; i <= 12; i++)
     {
          result =2*i;
          printf("2 x %d = %d \n", i ,result );
          
     }

     getchar();
     
     return 0;
}