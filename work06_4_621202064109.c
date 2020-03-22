#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
     int counter = 0,  index = 1 ;
     long max=LONG_MIN , min=LONG_MAX ,num=0;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     printf("Enter the number of loop  :");
     scanf("%d", &counter);

     while (index <= counter)
     {
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
          
          index++;
     }

     // printf("LONG_MIN   = %+ld\n", LONG_MIN);
     // printf("LONG_MAX   = %+ld\n", LONG_MAX);
     // printf("\n");

     printf("Maximumn of  number is : %ld \n" , max);
     printf("Minimumn of  number is : %ld \n" , min);

     getchar();

     return 0;
}