#include<stdio.h>

int main(int argc, char const *argv[])
{
    int side1, side2, height;
    printf("Enter the side1\n");
    scanf("%d", &side1);

    printf("Enter the side2\n");
    scanf("%d", &side2);

    printf("Enter the height\n");
    scanf("%d", &height);

    printf("%.2f", 0.5 *(side1 + side2) * height);
    
    return 0;
}
