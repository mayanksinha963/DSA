#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        
    }

    for (int i = 0; i < 5; i++)
    {
        if (num[i] != i)
        {
            printf("%d",i);
            return i;
        }
        
    }
    

    
    return 0;
}
