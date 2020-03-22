#include<stdio.h>

 int main()
{
     float width ,length , round ;
     printf("Please enter the width : ");
     scanf("%f",&width);

     printf("Please enter the length : ");
     scanf("%f",&length);


     round  = 2*(length + width);


     printf("Rectangle round length is %f \n" , round);

    
     return 0;
}