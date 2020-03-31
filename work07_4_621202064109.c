#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main (){

     char prodCode[10],prodName[20] , ans = 'y' ;
     int amount= 0 , total_amount = 0;
     float price=0  , net= 0  , total  = 0 , discount = 0 , total_discount = 0; 

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     
     
     do
     {
          printf("Input Product Code : ");
          scanf("%s" ,  prodCode);

          printf("Input Product Name : ");
          scanf("%s" ,  prodName);

          printf("Input Amount : ");
          scanf("%d" ,  &amount );

          printf("Input Price/Unit : ");
          scanf("%f" ,  &price );

          printf("More (y/n) : "); 
          ans = getch();

          printf("ans = %c : ", ans );


          total += amount * price ;
          total_amount += amount ;

         

     } while (ans == 'y' );
     

     if(total_amount < 150)
     {
          discount = 0;
     }
     else if (total_amount >= 150 && total_amount <= 500)
     {
          discount = 3;
     }
     else if(total_amount > 500 && total_amount <= 1200)
     {
           discount = 5;
     }
     else if (total_amount > 1200)
     {
          discount = 10 ;
     }
     
     total_discount = (discount * total / 100) ;
     net = total - total_discount ;


     return 0;
}