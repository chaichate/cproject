#include <stdio.h>
#include <stdlib.h>

int main()
{
     int counter = 0, num=0 , index = 1 , sumodd , sumeven;

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

          if(num %2 == 0)
          {
               sumeven += num ;
          }
          else if(num%2 != 0)
          {
               sumodd += num;
          }
          

          index++;
     }

     printf("sum of even numbers is : %d \n" , sumeven);
     printf("sum of odd numbers is : %d \n" , sumodd);

     getchar();

     return 0;
}