#include<stdio.h>
#include<stdlib.h>
struct node
{
    int k;
    struct node* next;

};
struct node* head;
int fistNode(int n)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->k=n;
    ptr->next=NULL;
    return ptr;
}
int insertBack(struct node* head, int n )
{
    if(head==NULL)
    {
        head=fistNode(n);
        return head;
    }
    struct node* ptr1=head;
    while(ptr1->next!=NULL)

        ptr1=ptr1->next;
    ptr1->next=fistNode(n);
    return head;
}
int Search(struct node* head,int k)
{
    struct node* ptr2=head;
    int counT=0;
    while(ptr2!=NULL&&ptr2->k!=k)
    {
        ptr2=ptr2->next;
        counT++;
    }
    if(ptr2!=NULL)
        printf("Found : %d\n",counT);
    else
        printf("-1\n");
    return ptr2;

}
void main()
{
    struct node* head=NULL;
    int numberItem,k;
    scanf("%d",&numberItem);
    while(numberItem>0)
    {
        int n;
        scanf("%d",&n);
        head=insertBack(head,n);
        numberItem--;
    }
    scanf("%d",&k);
    Search(head,k);


}
