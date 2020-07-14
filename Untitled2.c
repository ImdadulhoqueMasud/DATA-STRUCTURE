#include<stdio.h>

int x,a[100],inPut,i,j=1,front=0,rear=0,y;
void setValu()
{
    int y=x;
    if(y==rear)
        printf("\nQueue is over");
    else
    {
        printf("enter no : ",j++);
        scanf("%d",&a[rear++]);
    }

}
void removeValue()
{
    if(front==rear)
        printf("Over");
    else
    {
        printf("Deleted Value : %d",a[front++]);
        y++;
    }
}
void show()
{
    printf("\nprint all value : ");
    if(front==rear)
        printf("Over");
    else
        for(i=0; i<rear; i++)
            printf("%d ",a[i]);
}
void isEmpty()
{
    if(rear==0&&front==0)
        printf("true");
    else
        printf("\2 false");

}
void isFull()
{
    if(rear==a[x])
        printf("true");
    else
        printf("false");

}
void main()
{
    printf("how many value you want to see : ");
    scanf("%d",&x);

    while(inPut!=6)
    {
        printf("\n1.Insertion \n2.Deletion \n3.Display \n4.IsEmpty\n5.IsFull\n6.Exit");
        printf("\nSet Item number : ");
        scanf("%d",&inPut);
        switch(inPut)
        {
        case 1:
        {
            setValu();
            break;
        }
        case 2:
        {
            removeValue();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            isEmpty();
            break;
        }
        case 5:
        {
            isFull();
            break;
        }
        case 6:
        {
            printf("......END......");
            break;
        }
        default:
            printf("you are out of the line!!!!!");
        }
    }
}
