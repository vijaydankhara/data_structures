#include <stdio.h>
#include <stdlib.h>
#define n 10


int Selection_sort( int a[])
{int v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                v = a[i];
                a[i] = a[j];
                a[j] = v;
            }
        }
    }
}

int main()
{
    int a[n],i;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    Selection_sort(a);

    printf("\n\n****************************************************************************\n");
    printf(" \t\t==> || Selection Sorter Array Is || <==\n");
    printf("****************************************************************************\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n****************************************************************************\n");
}