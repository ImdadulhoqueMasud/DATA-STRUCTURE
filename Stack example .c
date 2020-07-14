#include<stdio.h>
int a[100],x,choice,top,i,n; ///global variable

void Pop() ///it work remove the value First In First Out(FIFO)
{
    if(top<=-1)
        printf("\nUnder over \n");
    else
    {
        printf("\nThe Pop value is : %d\n",a[top]);
        top--;
    }
}
void Push() ///it is work insert value one by one
{
    if(top>=n-1)
        printf("Over");
    else
    {
        printf("\nenter the value : ");
        scanf("%d",&x);
        top++;
        a[top]=x;
    }
}
void Peek()  ///peek is one kind of operation.it show top of the value
{
    if(top>=0)
        printf("Top of stack : %d\n",a[top]);
    else
        printf("empty stack \n");
}
void Show() ///display the store the value
{
    if(top>=0)
    {
        for(i=top; i>=0; i--){
            printf("\nElements of stack: %d\n",a[i]);
    }}
    else
        printf("\nstack empty ");
}

void main()
{
    top=-1;
    printf("how many value you store : ");
    scanf("%d",&n);


    while(choice!=5)
    {
        printf("1.Push\n2.Pop\n3.Show\n4.Peek\n5.End");
        printf("\nYour choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            Push();
            break;
        }
        case 2:
        {
            Pop();
            break;
        }
        case 3:
        {
            Show();
            break;
        }
        case 4:
        {
            Peek();
            break;
        }
        case 5:
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        default:
        {
            printf("you are out of the world ...........");

        }
        }
    }
}
