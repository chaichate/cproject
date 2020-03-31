#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
     long max=LONG_MIN , min=LONG_MAX ,num=0;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif


     do {
          printf("Input Number :");
          scanf("%ld", &num);

          if(num > max)
          {
               max = num ;
          }
          
          if(num < min)
          {
               min = num ;
          }
          
     }
     while (num != 0);

     printf("Maximumn of  number is : %ld \n" , max);
     printf("Minimumn of  number is : %ld \n" , min);

     getchar();

     return 0;
}