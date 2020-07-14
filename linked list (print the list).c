#include<stdio.h>
#include<stdlib.h>

struct masud{
int data;
struct masud* next;
};

void print_list(struct masud* num)
{
    while(num!=NULL)
    {
        printf("%d ",num->data);
        num=num->next;
    }
}

void main()
{
    struct masud* start=NULL;
    struct masud* Node=NULL;

    start=(struct masud*)malloc(sizeof(struct masud));
    Node=(struct masud*)malloc(sizeof(struct masud));
    start->data=1;
    start->next=Node;
    Node->data=2;
    Node->next=NULL;
    print_list(start);

}
