#include<stdio.h>
void value(void);
void main()
{
    value();
}
void value(void)
{
    int year , period , amount , inrate;
    scanf("%d" ,& year) ;
    scanf("%d" ,& period) ;
    scanf("%d" ,& amount) ;
    scanf("%d" ,& inrate) ;
    float sum;
    sum = amount;
    while (year <= period) {
        sum = sum * (1 + inrate);
        year = year + 1;
    }
    printf(" The total amount is %f:", sum);
}