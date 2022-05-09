#include <stdio.h>

int main()
{

    float product = 0;

    printf("Enter the product value: \n");
    scanf("%f", &product);

    if (product < 100)
    {
        product = product + ((product / 100) * 10);
        printf("Valor: %.2f\n", product);
    }
    else
    {
        product = product + ((product / 100) * 20);
        printf("Valor: %.2f\n", product);
    }

    return 0;
}