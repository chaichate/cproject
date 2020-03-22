#include <stdio.h>
#include <stdlib.h>

int main()
{
     int counter = 0, num=0 , index = 1 , sum =0;

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
          scanf("%d", &num);

          if(num > 0)
          {
               sum += num ;
          }
          

          index++;
     }

     printf("Sum of positive integers is : %d \n" , sum);

     getchar();

     return 0;
}