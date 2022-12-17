#include <stdio.h>
#include <conio.h>

int main(){
    float side, area;
    printf("Enter length of side of square\n");
    scanf("%f", &side);
    /* Area of Square = Side X Side */
    area = side * side;
    printf("Area of square : %0.4f\n", area);

    getch();
    return 0;
}

