#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     
    float width ,length , area ;

    // clrscr();
    system("Clear");

    printf("\n");

    printf("Please enter a width : ");
    scanf("%f", &width);

    printf("Please enter a leangth : ");
    scanf("%f", &length);


    area = width * length ;

    printf("Area is %f \n", area);
     
    return 0;   
}