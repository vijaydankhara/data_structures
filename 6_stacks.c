#include <stdio.h>
#define n 5
int a[n], top = -1,ch,data;

int insertEnd()
{

    printf("Enter Value Is Insert :- \n");
    scanf("%d",&data);
    if (top >= n - 1)
    {
        printf("==> || Stack Is Full || <== \n");
    }
    else
    {
        top++;
        a[top] = data;
    }
}
int delete()
{
    if (top < 0)
    {
        printf("==> || Arry Position Over || <== \n");
    }
    else
    {
        top--;
    }
}
int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
  do
  {
    printf("\n ===> || Menu || <===\n");
    printf("\n press 1 for ===> Insert Array \n");
    printf("\n press 2 for ===> Delete Array \n"); 
    printf("\n press 3 for ===> Display Array \n");
    printf("\n press 0 for ===> Exit \n");
    printf("\n ==> || Enter Your Choice ===> 1 2 3 0 || <== \n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        insertEnd();
        break;

    case 2:
        delete();
        break;
    
    case 3:
        display();
        break;

    case 0:
        printf("Exit\n");
        return 0;    

    default:
    printf("Plese Enter The Valide Choice --> 1  2  3 ");
        break;
    }

  } while (ch!=0);
  
}