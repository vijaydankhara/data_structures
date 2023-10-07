#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int b = a[0];

    for (int i = 0; i < 4; i++) 
    {
        a[i - 1] = a[i];
    }

    a[3] = b;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}