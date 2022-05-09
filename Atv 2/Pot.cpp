#include <stdio.h>

int potency(int base, int expo)
{

    int aux = 1;

    for (int i = 0; i < expo; i++)
    {
        aux = aux * base;
    }

    printf("Result: %d\n", aux);
}

int main()
{

    potency(3, 3);
    potency(2, 5);

    return 0;
}