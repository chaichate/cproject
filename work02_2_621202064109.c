#include<stdio.h>

 int main()
{
     float price ,total , discount , netprice ;
     int amount ;
    
     printf("Input Price  : ");
     scanf("%f", &price );

     printf("Input Amount : ");
     scanf("%d",&amount);

     total = price * amount ;
     discount = (3 / 100.00) * total ;
     netprice = total - discount ;

     printf("Total Money = %f \n" , total );
     printf("Discount = %f \n" , discount );
     printf("Net Pay = %f \n" , netprice );


     return 0;
}