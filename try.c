#include<stdio.h>

int top=-1,array[100],i,n,x,Set;
void Push1()
{
    if(top>=n-1)
        printf("\nover\n");
    else
    {
        printf("value : ");
        scanf("%d",&x);
        top++;
        array[top]=x;
    }

}
void Pop1()
{
    if(top>=-1)
    {
        printf("\nRemove Number: %d\n",array[top]);
        top--;
    }
    else
        printf("Over POP");
}
void Peek1()
{
    if(top>=-1)
        printf("\nShow the top value : %d\n",array[top]);
        else
        printf("\nOver Peek");
}
void display1()
{
    if(top>=-1)
    {
        for(i=top;i>=0;i--)
        printf("\nShow me : %d",array[i]);
    }
    else
        printf("\n Show Over\n");


}
void main()
{

    printf("How many value if You need : ");
    scanf("%d",&n);
    while(Set!=5)
    {
        printf("1.Put the value\n2.Remove the value\n3.Top of the value\n4.Show the value\n5.End the program");
        printf("\nSet you item : ");
        scanf("%d",&Set);
        switch(Set)
        {
        case 1:
            {
                Push1();
                break;
            }
        case 2:
            {
                Pop1();
                break;
            }
        case 3:
            {
                Peek1();
                break;
            }
        case 4:
            {
                display1();
                break;
            }
        case 5:
            {
                printf("........THE END.........");
                break;
            }
        default:
            printf("\nTry again ");
        }
    }
}
