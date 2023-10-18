#include<stdio.h>
#define n 5
int a[n] , f =-1 , r =-1;

int End_Insert(int data)
{
    if(r >= n-1)
    {
        printf("Queue Is Full...");
    }
    else if(f < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else
    {
        r++;
        a[r] = data;
    }
}

int first_Delete()
{
    if (f == r)
    {
        printf("Queue Is Empty...");
        return -1;
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int display()
{
    if (f<0)
    {
        printf("queue is empty...");
    }
    
    for (int i = f; i <= r; i++)
    {
        printf("%d\t",a[i]);
    }   
}

int main()
{
    End_Insert(10);
    End_Insert(20);
    End_Insert(30);
    End_Insert(40);
    //first_Insert(50);
    End_Insert(40);
    End_Insert(99);
    display();
}