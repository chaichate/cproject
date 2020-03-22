#include <stdio.h>
#include <stdlib.h>

int main()
{
     int result = 0;
     int num = 0;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif


     printf("Input Number  : ");
     scanf("%d" , &num  );
     
     for (int i = 1; i <= 12; i++)
     {
          result = num * i ;
          printf("%d x %d = %d \n", num ,i ,result );
     }

     getchar();
     
     return 0;
}