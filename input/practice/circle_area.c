#include<stdio.h>

int main(int argc, char const *argv[])
{
    int radius;
    float p = 3.14;

    printf("Enter the value of radius\n");
    scanf("%d", &radius);

    printf("Area of circle is %0.2f", p*radius*radius );
    return 0;
}
