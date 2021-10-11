#include<stdio.h>
#include<conio.h>

void main()
{
    int x, n1, n2;
    char ch;

    printf("Enter a number \n");
    scanf("%d", &n1);

    printf("Enter a number \n");
    scanf("%d", &n2);
    printf("Enter a mathematical operation \n");
    ch=getch();

    if (ch== '+' || ch== '-' || ch== '*' || ch== '/')
    {
        printf("operation is %c \n",ch);
    }
    else
    {
        printf("Invalid! \nPlease enter a valid mathematical operation \n");
        printf("Allowed operations are +, -, * /");
    }

    if (ch=='+')
    {
        x=n1+n2;
        printf("sum = %d",x);
    }

    if (ch=='-')
    {
        x=n1-n2;
        printf("difference = %d",x);
    }
     if (ch=='*')
    {
        x=n1*n2;
        printf("product = %d",x);
    }
    if (ch=='/')
    {
        x=n1/n2;
        printf("quotient = %d",x);
    }
}
