#include <stdio.h>

int main()
{
     char StdCode[10] , StdName[30] ; 
     float RawMidScore , RawFinScore , MidScore , FinScore  , TotalScore ; 

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     
     printf("Input Student ID  : ");
     scanf("%s" , StdCode );

     printf("Input Student Name  : ");
     scanf("%s" , StdName );

     printf("Input Raw Midterm Score  : ");
     scanf("%f", &RawMidScore);

     printf("Input Raw Final Score  : ");
     scanf("%f", &RawFinScore);

     MidScore = RawMidScore  * (70/100.0) ;
     FinScore = RawFinScore  * (100 / 120.0) * (30/100.0) ;

     TotalScore = MidScore + FinScore ;

     printf("Total Score  = %f \n" , TotalScore );

     return 0;
}