#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[5];
    int i;

    for(i=0; i<=4; i++)
    {
        c[i] = a[i];
        printf("%d",c[i]);
    }

    
    for(i=0; i<=4; i++)
    {
        c[i] = b[i];
        printf("%d",c[i]);
    }
}