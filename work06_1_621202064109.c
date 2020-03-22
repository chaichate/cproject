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

     for (int i = 2; i <= 12; i++)
     {
          printf("=== %d time table === \n", i);

          for (int num = 1; num < 12; num++)
          {
               result = num * i;
               printf("%d x %d = %d \n",  i, num , result);
          }

          printf("\n");
     }

     getchar();

     return 0;
}