#include <stdio.h>

int main()
{

    int x = 1;
    float note1[50], note2[50], averange = 0;

    printf("How many students are in the class? ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {

        do
        {

            printf("\n--------Student %d--------\n", i + 1);

            printf("Note from the first test: ");
            scanf("%f", &note1[i]);

            if (note1[i] == 50)
            {
                return 0;
            }

            printf("Note from the second test: ");
            scanf("%f", &note2[i]);

            averange = (note1[i] + note2[i]) / 2;

            if ((note1[i] < 0) || (note1[i] > 10) || (note2[i] < 0) || (note2[i] > 10))
            {
                printf("ERROR! The notes must be in the range of 0-10\n");
                printf("--Enter the notes again--\n");
                note1[i] = 0;
                note2[i] = 0;
                i--;
            }
            else
            {
                printf("Averange: %.2f\n", averange);
            }

        } while ((note1[i] < 0) || (note1[i] > 10) || (note2[i] < 0) || (note2[i] > 10));
    }

    return 0;
}