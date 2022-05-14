
#include <stdio.h>

int main(void)
{
    int var1 = 0, var2 = 0;

    printf("\n1a variavel ");
    scanf("%d", &var1);

    printf("\n2a variavel ");
    scanf("%d", &var2);

    if (&var1 > &var2)
    {
        printf("%d", var1);
    }
    else
    {
        printf("%d", var2);
    }

    return 0;
}