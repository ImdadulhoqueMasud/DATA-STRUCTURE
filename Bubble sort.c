#include<stdio.h>
void main()
{
    int a[100],i,j,item,swap;
    printf("enter number of item : ");
    scanf("%d",&item);
    printf("Store the value : ");
    for(i=0; i<item; i++)
        scanf("%d",&a[i]);
    for(i=0; i<item-1; i++)
        for(j=0; j<item-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[i];
                a[i]=a[i+1];
                a[i+1]=swap;
            }
        }
    printf("Sorted list in ascending order : ");
    for(i=0; i<item; i++)
        printf("%d ",a[i]);
}
