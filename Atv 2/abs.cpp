#include <stdio.h>

int absolut(int n[5])
{

    for (int i = 0; i < 5; i++)
    {

        if (n[i] < 0)
        {
            n[i] = n[i] * (-1);
        }
        printf("Result: %d\n", n[i]);
    }
}

int main()
{

    int n[5] = {-1, -2, 5, 3, -9};
    int m[5] = {-2, 3, 6, -7, -2};

    absolut(n);
    absolut(m);

    return 0;
}