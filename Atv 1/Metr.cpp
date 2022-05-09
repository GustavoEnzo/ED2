#include <stdio.h>

int main()
{

    int value = 0;
    float dm = 0, cm = 0, mm = 0;

    printf("Enter the value in meters: ");
    scanf("%d", &value);

    dm = value * 10;
    cm = value * 100;
    mm = value * 1000;

    printf("Value in decimeters: %.2f\n", dm);
    printf("Valor in millimeters: %.2f\n", mm);
    printf("Value in centimeters: %.2f\n", cm);

    return 0;
}