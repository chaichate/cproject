#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

     float RawMidScore , RawFinScore , MidScore , FinScore  , TotalScore ;
     char StdCode[10] , StdName[30], grade ; 
     int Score ;
     char c;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif


     printf("Input Student ID  : ");
     scanf("%s" , StdCode );

     printf("Input Student Name : ");
     scanf("%s" , StdName );


     printf("Input Raw Midterm Score (max 100) : ");
     scanf("%f", &RawMidScore);


     printf("Input Raw Final Score (max 120) : ");
     scanf("%f", &RawFinScore);

     MidScore = RawMidScore  * (70/100.0) ;
     FinScore = RawFinScore  * (100 / 120.0) * (30/100.0) ;

     TotalScore = MidScore + FinScore ;
  
     Score = round(TotalScore);

     if(Score < 50 ){
          grade = 'E';
     }
     else if(Score >= 50 && Score < 60)
     {
          grade = 'D';
     }
     else if(Score >= 60 && Score < 70)
     {
          grade = 'C';
     }
     else if(Score >= 70 && Score <= 85)
     {
          grade = 'B';
     }
     else if(Score > 85)
     {
          grade = 'A';
     }
     else
     {
         grade = ' ' ;
     }

     printf("Student ID = %s\n", StdCode );
     printf("Student Name = %s\n", StdName );
     printf("Raw Midterm Score  = %.2f\n" , RawMidScore );
     printf("Raw RawFinal Score  = %.2f\n" , RawFinScore );
     printf("Total Score  = %d\n" , Score );
     printf("Grade  = %c\n" , grade );

     return 0;
}
