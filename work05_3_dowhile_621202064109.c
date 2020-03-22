#include <stdio.h>
#include <stdlib.h>

int main()
{
     int result = 0;
     int i =1;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif
     
     printf("Multiplication table \n");

     do
     {
          result =2*i;
          printf("2 x %d = %d \n", i ,result );
          
          i++;
     } while (i <= 12);

     getchar();
     
     return 0;
}