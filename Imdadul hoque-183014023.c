#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node* next;
};
struct node *head;
void valueInsertOfEnd()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;


        }

        printf("\n \n Do not COPY " that plz ");

        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;

        }
    }
}
void valueRemove()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nDeleted from the start...\n");
    }
}
void valueDisplay()
{
        struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting NID . . . . .\n");
        while (ptr!=NULL)
        {
            printf(" %d",ptr->data);
            ptr = ptr -> next;
        }
    }

}
void main()
{
    int choice;


    printf("1.for entry to the Center (insert NID)\n2.for service (remove NID)\n3.for display (available NID)\n4.END");

    while(choice!=4)
    {
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            valueInsertOfEnd();
            break;
        }
        case 2:
        {
            valueRemove();
            break;
        }
        case 3:
        {
            valueDisplay();
            break;
        }
        case 4:
        {
            printf(".......END........");
            break;
        }
        default:
            printf("Out of the limit");
        }
    }
}
