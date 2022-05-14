#include <stdio.h>

int main(void)
{
    int *v1 = 0, *v2 = 0;

    if (*v1 > *v2)
    {
        printf("%d", *v1);
    }
    else
    {
        printf("%d", *v2);
    }

    return 0;
}