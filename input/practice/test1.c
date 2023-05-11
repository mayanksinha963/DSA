#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s1[10];
    char s2[10];
    scanf("%s", &s1);
    scanf("%s", &s2);

    int i = 0;
    int j = 0;
    char *z = strstr(s1, s2);
    int n;

    while (s1[i] != '\0' && s2[j] != '\0')
    {
        if (z)
        {
            if (s1[i] == s2[j])
            {
                // printf("%d ", i);
                i++;
                j++;
            }
            else
            {
                n = i + 1;
                i++;
                j = 0;
            }
        }
        else
        {
            printf("Not found");
            return 0;
        }
    }

    printf("%d", n);

    return 0;
}
