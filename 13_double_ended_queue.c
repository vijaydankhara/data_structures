#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1, ch;

int first_Insert(int data)
{
    if (f < 0)
    {
        f = r = 0;
        a[f] = data;
    }
    else if (f == 0)
    {
        printf("==> || DO NOT PERFORM HEAR || <== \n");
    }
    else
    {
        f--;
        a[f] = data;
    }
}

int first_Delete()
{
    if (f < 0)
    {
        printf("Queue Is Empty...");
        return -1;
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f=(f+1)%n;
    }
}


int Last_insert(int data)
{
    if (r < 0)
    {
       f = r = 0;
        a[r] = data;
    }
    else if ((r+1)%n==f)
    {
         printf("Queue Is Full...");
    }
    else
    {
        r=(r+1)%n;
        a[r] = data;
    }
}

int Last_delete()
{

    if (r < 0)
    {
        printf("Queue Is Empty...");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
        for (int i = f; i <= r; i++)
        {
            printf("%d\t", a[i]);
        }
}

int main()
{
    int ch, data;
    do
    {
        printf("\n************************************************\n");
        printf("\t\t==> || Menu || <==\n");
        printf("************************************************\n");
        printf("Press 1 For Inser of Front \n");
        printf("Press 2 For Delete of Front \n");
        printf("Press 3 For Inser of Last \n");
        printf("Press 4 For Delete of Last \n");
        printf("Press 5 for Display \n");
        printf("Press 0 for EXIT \n");
        printf("************************************************\n");
        printf("==> || Enter Your Choice || <==\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Frist Insert :- ");
            scanf("%d", &data);
            first_Insert(data);
            break;

        case 2:
            first_Delete();
            break;

        case 3:
            printf("Last Insert :- ");
            scanf("%d", &data);
            Last_insert(data);
            break;

        case 4:
            first_Delete();
            break;

        case 5:
            display();
            break;

        case 0:
            printf("==> || EXIT || <==\n");
            break;

        default:
            printf("Plese Try Again ");
            break;
        }
    } while (ch != 0);
    return 0;
}