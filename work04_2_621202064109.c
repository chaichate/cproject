#include <stdio.h>
#include <stdlib.h>

int main() {

     float workHour , wagesPerHour , netWage  ;
     char empName[30];

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif


     printf("Input Employee Name : ");
     scanf("%s", empName );

     printf("Input Total Work Hours : ");
     scanf("%f", &workHour );


     printf("Input hourly wage rate : ");
     scanf("%f", &wagesPerHour );


     if(workHour > 6)
     {
          netWage = 6 * wagesPerHour ;
          netWage += (workHour - 6) * (wagesPerHour * 2);
     }
     else
     {
          netWage = workHour * wagesPerHour ;
     }
     

     printf("Total Wages is %f \n"  , netWage );

     return 0;
}