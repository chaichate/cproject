#include <stdio.h>
#include <stdlib.h>

int main(){
     
     char char_choice[3];
     int int_choice = 0,number_first,number_second;
     float result;

     #ifdef _WIN32
               system("cls");
     #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
               system("clear");
     #endif

     // do
     // {
          printf("Please select a calculation method.\n");
          printf("1. Addition operator\n");
          printf("2. Subtraction operator\n");
          printf("3. Multiplication operator\n");
          printf("4. Division operator\n");
          printf("5. exit\n");

          scanf("%s", char_choice);
          int_choice = atoi(char_choice);

          if(int_choice == 5)
          {
               exit(0);
          }

          printf("Input First Number : ");
          scanf("%d", &number_first );


          printf("Input Second Number : ");
          scanf("%d", &number_second );

          switch (int_choice)
          {
               case 1:
                    result = number_first + number_second ;
                    break;
               case 2:
                    result = number_first - number_second ;
                    break;
               case 3:
                    result = number_first * number_second ;
                    break;
               case 4:
                    result = (float)number_first / number_second ;
                    break;
               default:
                    printf("Bad choice. ");
                    break;
          }


          printf("result is : %.2f \n", result );


     // } while (int_choice != 99);

     return 0;
}