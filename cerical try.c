#include<stdio.h>

int a[100],x,front=0,rear=0,item,choice;
void valuePut()
{
    printf("Add the element : ");
    scanf("%d",&choice);
    if((front==0&&rear==x-1) || (front==rear+1))
    {
        printf("over");
    }

    else
    {
        if(rear==x-1)
            rear=-1;
        else
            rear=rear+1;
    }
    a[rear]=choice;
}
void valueRemove()
{
    if(front==-1)
        printf("Queue over");
    printf("Queue Remove : %d ",a[front]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        if(front==x-1)
            front=0;
        else
            rear=rear+1;
    }
}
void show()
{
    int front_op=front;
    int rear_op=rear;
    if(front==0)
        printf("queue empty");
    printf("Queue element : ");
    if(front_op<=rear_op)
        while(front_op<=rear_op)
        {
            printf("%d ",a[front_op]);
            front_op++;
        }
    else
    {
        while(front_op<=x-1)
        {
            printf("%d ",a[front_op]);
            front_op++;
        }
       // front_op=0;
      /*  while(front_op<=rear_op)
        {
            printf("%d ",a[front_op]);
            front_op++;
        }
*/
    }
    printf("\n");
}
void main()
{
    printf("How many value you want to see : ");
    scanf("%d",&x);
    while(item!=4)
    {
        printf("\n1.Value input\n2.Value remove\n3.Display\n4.Exit the program");
        printf("\nEnter your choice : ");
        scanf("%d",&item);
        switch(item)
        {
        case 1:
        {
            valuePut();
            break;
        }
        case 2:
        {
            valueRemove();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            printf(".........END OF THE PROGAME.........");
            break;
        }
        default:
            printf("!!!!!You are out of the line!!!!!!");
        }
    }

}
