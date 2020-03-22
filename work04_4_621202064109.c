#include <stdio.h>
#include <stdlib.h>

int main(){

     char code[10],name[30],choice[1] ;
     float sum,discount,total ;
     int int_choice ;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     printf("Input Code : ");
     scanf("%s", code );
     
     printf("input Name : ");
     scanf("%s", name );

     printf("input Sum :" );
     scanf("%f", &sum );


     printf("1. Cash\n");
     printf("2. Check in 1 month\n");
     printf("3. Check over 1 month\n");
     printf("Input Choice :");

     scanf("%s",choice);
     int_choice = atoi(choice);

     if(int_choice == 1)
     {
          discount = sum * 10 / 100 ;
     }

     if(int_choice == 2)
     {
          discount = sum * 5 / 100 ;
     }

     if(int_choice == 3)
     {
          discount = 0 ;
     }

     total = sum - discount ;
     printf("Total = %.2f ",total);


     return 0;
}