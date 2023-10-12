#include <stdio.h>
#define n 5
int a[n], top = -1,ch,data;

int End_insert()
{

    printf("\t\tEnter Value Is Insert :- ");
    scanf("\t\t\t%d",&data);
    if (top >= n - 1)
    {
        printf("\n\t||***********************************************||\n");
        printf("\t\t==> || Stack Is Full || <== \n");
        printf("\n\t||***********************************************||\n");
    }
    else
    {
        top++;
        a[top] = data;
    }
}
int End_delete()
{
    if (top < 0)
    {
        printf("\n\t||***********************************************||\n");
        printf("\t\t==> || Arry Position Over || <== \n");
        printf("\n\t||***********************************************||\n");
    }
    else
    {
        top--;
    }
}

int frist_insert()
{

    printf("\t\tEnter Value Is Insert :- ");
    scanf("\t\t\t%d",&data);
    if (top >= n - 1)
    {
        printf("\n\t||***********************************************||\n");
        printf("\t\t==> || Stack Is Full || <== \n");
        printf("\n\t||***********************************************||\n");
    }
    else if (top<0)
    {
        top++;
        a[top] = data;
    }else
    {
        top++;
        for(int i = top; i >=0; i--)
        {
            a[i]=a[i-1];
        }
        a[0]=data;
    }
}
int frist_delete()
{
    if (top < 0)
    {
        printf("\n\t||***********************************************||\n");
        printf("\t\t==> || Arry Position Over || <== \n");
        printf("\n\t||***********************************************||\n");
    }
    else if (top<0)
    {
      top--;
        a[top] = data;
    }else
    
    {
         for(int i = 0; i<=top; i++)
        {
            a[i]=a[i+1];
        }
        top--;
    }
}

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("\t\t%d\t", a[i]);
    }
}


int main()
{
  do
  {
    printf("\n\t||***********************************************||\n");
    printf("\t\t\t ===> || Menu || <===\n");
    printf("\t||***********************************************||\n");
    printf("\n\t\t press 1 for ===> End_Insert Array \n");
    printf("\n\t\t press 2 for ===> End_Delete Array \n"); 
    printf("\n\t\t press 3 for ===> Frist_Insert Array \n");
    printf("\n\t\t press 4 for ===> Frist_Delete Array \n"); 
    printf("\n\t\t press 5 for ===> Display Array \n");
    printf("\n\t\t press 0 for ===> Exit \n");
    printf("\t||***********************************************||\n");
    printf("\t==> || Enter Your Choice ===> 1 2 3 4 5 0 || <== \n");
    printf("\t||***********************************************||\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        End_insert();
        break;

    case 2:
        End_delete();
        break;

    case 3:
        frist_insert();
        break;

    case 4:
        frist_delete();
        break;
    
    case 5:
        display();
        break;

    case 0:
        printf("\t\t\t||**********************************||\n");
        printf("\t\t\t==> || ThankYou So Much || \n");
        printf("\t\t\t==> || Plese Rune Pogram Again || \n");
        
        return 0;    

    default:
    printf("\t\tPlese Enter The Valide Choice ===>. 1  2  3 4 5 0 ");
        break;
    }

  } while (ch!=0);
  
}