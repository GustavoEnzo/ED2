#include <stdio.h>
#include <stdlib.h>

struct student
{
    int mat;
    char name[81];
    char classe[1];
    float t1;
    float t2;
    float t3;
    float average;
};
typedef struct student Student;

void initializes(int n, Student **tab)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = NULL;
    }
}

void insert(int n, Student **tab, int i)
{

    if (i < 0 || i >= n)
    {
        printf("Index out of vector limit\n");
        exit(1);
    }

    if (tab[i] == NULL)
    {
        tab[i] = (Student *)malloc(sizeof(Student));
    }

    printf("Enter with the enrollment: ");
    scanf("%d", &tab[i]->mat);
    printf("Enter with the name: ");
    scanf("%s", &tab[i]->nome);
    printf("Enter with the class: ");
    scanf("%s", &tab[i]->classe);
    printf("Enter with the note 1: ");
    scanf("%f", &tab[i]->t1);
    printf("Enter with the note 2: ");
    scanf("%f", &tab[i]->t2);
    printf("Enter with the note 3: ");
    scanf("%f", &tab[i]->t3);

    tab[i]->average = (((tab[i]->t1) + (tab[i]->t2) + (tab[i]->t3)) / 3);

    printf("Student successfully entered\n");
}

void print_student(int n, Student **tab, int i)
{

    if (i < 0 || i >= n)
    {
        printf("Index out of vector limit\n");
        exit(1);
    }

    if (tab[i] != NULL)
    {
        if (tab[i]->average >= 7)
        {
            printf("\nStudent Data: %d\n", i + 1);
            printf("Student name: %s\n", tab[i]->nome);
            printf("Student enrollment : %d\n", tab[i]->mat);
            printf("Student class : %s\n", tab[i]->classe);
            printf("Student average: %f\n", tab[i]->average);
        }
    }
}

void print_approved(int n, Student **tab)
{

    for (int i = 0; i < n; i++)
    {

        print_student(n, tab, i);
    }
}

int main()
{

    Student *tab[10];

    initializes(10, tab);

    insert(10, tab, 0);
    insert(10, tab, 1);
    print_approved(10, tab);

    return 0;
}