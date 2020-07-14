#include<stdio.h>
#include<conio.h>
//#define n 5
   int n,queue[n],ch,front=0,rear=0,i,j=1,x=n;
void Enqueue()
{
    if(rear==x)
        printf("\n Queue is Full");
    else
    {
        printf("Enter no %d:",j++);
        scanf("%d",&queue[rear++]);
    }
}
void Dequeue()
{
    if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\nDeleted Element is : %d",queue[front++]);
                x++;
            }
}
void isEmpty()
{
    if(front==0&&rear==0)
        printf("True");
    else
        printf("False");
}
void isFull()
{
    if(rear==queue[n])
        printf("Isfull is true");
    else
        printf("Isfull is false");
}
void dis()
{
    printf("\n Queue Elements are: ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d ",queue[i]);

                }
}
}
void main()
{

    //clrscr();
    printf("Queue using Array");

    while(ch)
    {
        printf("\n1.Insertion \n2.Deletion \n3.Display \n4.IsEmpty\n5.IsFull\n6.Exit");
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:{
            dis();
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
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }

