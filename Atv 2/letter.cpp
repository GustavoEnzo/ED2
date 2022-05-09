#include <stdio.h>

int notes(float note1, float note2, float note3, char letter)
{

    float average = 0;

    if (letter == 'a')
    {
        average = (note1 + note2 + note3) / 3;
        printf("Average arithmetic: %.2f\n", average);
    }
    else if (letter == 'p')
    {
        average = ((note1 * 5) + (note2 * 3) + (note3 * 2)) / 10;
        printf("Average weighted: %.2f\n", average);
    }
    else if (letter == 'h')
    {
        average = 3 / ((1 / note1) + (1 / note2) + (1 / note3));
        printf("Average harmonica: %.2f\n", average);
    }
}

int main()
{

    notes(10, 7, 9, 'a');
    notes(9, 7, 8, 'w');
    notes(10, 9, 9, 'h');

    return 0;
}