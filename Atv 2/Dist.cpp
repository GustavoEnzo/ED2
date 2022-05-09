#include <stdio.h>

int distance(int x1, int y1, int x2, int y2)
{

    float average1 = 0, average2 = 0;

    average1 = x1 - y1;
    average2 = x2 - y2;

    if (average1 < 0)
    {
        average1 = (x1 - y1) * (-1);
    }
    if (average2 < 0)
    {
        average2 = (x2 - y2) * (-1);
    }

    printf("Distance between x1 and y1: %.2f\n", average1);
    printf("Distance between x2 and y2: %.2f\n", average2);
}

int main()
{

    distance(3, 2, 9, 5);

    return 0;
}