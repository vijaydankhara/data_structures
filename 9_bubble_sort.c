#include <stdio.h>
#include <stdlib.h>
#define n 10


int bubble_sort( int a[])
{int v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                v = a[j];
                a[j] = a[j + 1];
                a[j + 1] = v;
            }
        }
    }
}

int main()
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    bubble_sort(a);
    printf("\n\n****************************************************************************\n");
    printf(" \t\t==> || Bubble Sorter Array Is || <==\n");
    printf("****************************************************************************\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n****************************************************************************\n");
}