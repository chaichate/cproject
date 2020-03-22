#include <stdio.h>
#include <stdlib.h>

int main() {

     char prodCode[10],prodName[30]; 
     float  price , discount , total ,netPrice , discountRate ;
     int amount;

     #ifdef _WIN32
          system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
          system("clear");
     #endif

     printf("Input Product Code : ");
     scanf("%s" , prodCode );


     printf("Input Product Name : ");
     scanf("%s" , prodName );


     printf("Input Amount : ");
     scanf("%d" , &amount );

     printf("Input Price per unit : ");
     scanf("%f" , &price );


     if(amount > 150 && amount <= 500 )
     {
          discountRate = 3 ;
     }
     else if (amount > 500 &&  amount  <= 1200 )
     {
          discountRate = 5;
     }
     else if (amount > 1200)
     {
          discountRate = 10 ;
     }
     else
     {
          discountRate = 0 ;
     }
     
     total = (price * amount);

     discount  =  discountRate * total / 100 ;
     netPrice = total - discount ;

     printf("Discount : %.2f\n", discount);
     printf("Net Price : %.2f\n" , netPrice);


     return 0;
}