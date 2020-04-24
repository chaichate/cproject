#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
     float price = 0, net = 0, total = 0, discount = 0, total_discount = 0 , sum = 0;
     char prodCode[10], prodName[20], ans = 'y';
     int amount = 0;

#ifdef _WIN32
     system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
     system("clear");
#endif

     do
     {
          printf("Input Product Code : ");
          scanf("%s", prodCode);

          printf("Input Product Name : ");
          scanf("%s", prodName);

          printf("Input Amount : ");
          scanf("%d", &amount);

          printf("Input Price/Unit : ");
          scanf("%f", &price);

          if (amount < 150)
          {
               discount = 0;
          }
          else if (amount >= 150 && amount <= 500)
          {
               discount = 3;
          }
          else if (amount > 500 && amount <= 1200)
          {
               discount = 5;
          }
          else if (amount > 1200)
          {
               discount = 10;
          }


          total = amount * price;
          total_discount = (total * discount/100);
          net = total - total_discount;


          printf("Discount = %.2f\n" , total_discount);
          printf("Total = %.2f\n" , net);

          printf("More (y/n) : ");
          ans = getche();

     } while (ans == 'y');

     return 0;
}