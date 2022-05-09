#include <stdio.h>

int main()
{

    float num1 = 0, num2 = 0, sum = 0, product = 0, square = 0;

    printf("Type the first number: \n");
    scanf("%f", &num1);
    printf("Type the second number: \n");
    scanf("%f", &num2);

    sum = num1 + num2;
    product = num1 * (num1 * num2);
    square = num1 * num1;

    printf("Sum: %.2f\n", sum);
    printf("Product: %.2f\n", product);
    printf("Square: %.2f\n", square);

    return 0;
}