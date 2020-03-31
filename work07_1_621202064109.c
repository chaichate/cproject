#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sum = 0 , num;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     do {
          printf("Input Number :");
          scanf("%d", &num);

          if(num %2 == 0)
          {
               sum += num ;
          }
                    
     } while (num >= 0);


     printf("Sum of  Even number is : %d \n" , sum);

     getchar();

     return 0;
}