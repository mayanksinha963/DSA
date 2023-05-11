#include <stdio.h>

int main(int argc, const char *argv[]){
     
    float radius  ;
    float pi = 3.14;

    printf("enter the vale of radius \n" );
    scanf("%f",  & radius);

    printf("area of your circle is %0.2f", pi*radius*radius);
    return 0;
}
