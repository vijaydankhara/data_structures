#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1, ch;

int first_Insert(int data)
{
    if (r >= n - 1)
    {
        printf("Queue Is Full...");
    }
    else if (f < 0)
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

int Last_insert(int data)
{
   if (r >= n - 1)
    {
        printf("Queue Is Full...");
    }
    else if (f < 0)
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

int Last_delete()
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
        r++;
    }
}


int display()
{
    if (f < 0)
    {
        printf("queue is empty...");
    }

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