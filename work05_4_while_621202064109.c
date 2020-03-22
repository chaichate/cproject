#include <stdio.h>
#include <stdlib.h>

int main()
{
     int result = 0 , num = 0 , i = 1;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif


     printf("Input Number  : ");
     scanf("%d" , &num  );
     
     while(i <= 12)
     {
          result = num * i ;
          printf("%d x %d = %d \n", num ,i ,result );

          i++;
     }

     getchar();
     
     return 0;
}