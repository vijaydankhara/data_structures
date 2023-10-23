#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertEnd(int val)
{
    printf("==> || Enter The Value || <==");
    scanf("%d",&val);
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("list is alredey empty....");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
    return;
}
void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("\nlist is empty...");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    int ch,val;
    do
    {
        printf("\n************************************************\n");
        printf("\t\t==> || Menu || <==\n");
        printf("************************************************\n");
        printf("Press 1 For insertEnd \n");
        printf("Press 2 For DeleteEnd \n");
        printf("Press 3 for Display \n");
        printf("Press 0 for EXIT \n");
        printf("************************************************\n");
        printf("==> || Enter Your Choice || <==\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertEnd(val);
            break;

        case 2:
            deleteEnd();
            break;

        case 3:
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
