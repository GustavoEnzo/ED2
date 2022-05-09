#include <stdio.h>

int main()
{

    float num1 = 0, num2 = 0;

    printf("Enter the first number : \n");
    scanf("%f", &num1);
    printf("Enter the second number: \n");
    scanf("%f", &num2);

    if (num1 < num2)
    {
        printf("%.2f >> %.2f\n", num1, num2);
    }
    if (num1 > num2)
    {
        printf("%.2f >> %.2f\n", num2, num1);
    }
    if (num1 == num2)
    {
        printf("Equals:");
    }

    return 0;
}