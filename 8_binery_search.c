#include <stdio.h>
   
int Binary_Search(int a[], int n, int element)
{
    int l = 0;
    int h = n - 1;
    int mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;

        if (a[mid] == element)
        {
            return mid;
        }
        else if (a[mid] < element)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    return -1;
}

int main()
{
    
    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    int v;
    int l = 0;
    int h = n - 1;
    int mid;

    printf("==> || Enter Searching Element || <== \n");
    scanf("%d", &v);

    int result = Binary_Search(a, n, v);

    if (result == -1)
    {
        printf("==> || Element Is Not Found || <== \n");
    }
    else
    {
        printf("==> || Element Is Found at Index %d || <== \n", result);
    }

    return 0;
}