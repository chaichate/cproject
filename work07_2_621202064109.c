#include <stdio.h>
#include <stdlib.h>

int main()
{
     float avg = 0 , counter = 0.0;
     int sum = 0 ,  num ;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     do {

          printf("Input Number :");
          scanf("%d", &num);

          if(num > 0)
          {
               sum += num ;
               counter ++;
          }
                    
     } while (num != 0);

     avg = sum / counter ;

     printf("Avg of Positive number is : %.2f \n" , avg );

     getchar();

     return 0;
}