#include <stdio.h>
#include <stdlib.h>

struct distance
{

    float average1;
    float average2;
};
typedef struct distance Distance;

void calculate(Distance **dis, int n, float x1, float y1, float x2, float y2)
{

    for (int i = 0; i < n; i++)
    {

        dis[i] = (Distance *)malloc(sizeof(Distance));

        dis[i]->average1 = x1 - y1;
        dis[i]->average2 = x2 - y2;

        if (dis[i]->average1 < 0)
        {
            dis[i]->average1 = (x1 - y1) * (-1);
        }
        if (dis[i]->average2 < 0)
        {
            dis[i]->average2 = (x2 - y2) * (-1);
        }

        printf("Distance between x1 and y1: %.2f\n", dis[i]->average1);
        printf("Distance between x2 and y2: %.2f\n", dis[i]->average2);
    }
}

int main()
{
    Distance *dis[1];

    calculate(dis, 1, 9, 6, 15, 4);

    return 0;
}