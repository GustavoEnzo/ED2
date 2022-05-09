#include <stdio.h>

int SumDivisors(int n[6])
{

    int divider, sum[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {

        for (divider = 1; divider < n[i]; divider++)
        {
            if (n[i] % divider == 0)
            {
                sum[i] = sum[i] + divider;
            }
        }
        printf("Result: %d\n", sum[i]);
    }
}

int main()
{

    int n[6] = {9, 7, 2, 4, 6};

    SumDivisors(n);

    return 0;
}