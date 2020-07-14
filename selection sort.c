#include<stdio.h>
void main()
{
    int a[100],i,j,swap,item,position;
    printf("Enter the number of item : ");
    scanf("%d",&item);
    printf("store the value : ");
    for(i=0; i<item; i++)
        scanf("%d",&a[i]);
    for(i=0; i<(item-1); i++)
    {
        position =i;
        for(j=i+1; j<item; j++)
        {
            if(a[position]>a[j])
                position = j;
        }
        if(position != i)
        {
            swap=a[i];
            a[i]=a[position];
            a[position]=swap;

        }
    }
    printf("Sorted list in ascending : ");
    for(i=0; i<item; i++)
        printf("%d ",a[i]);

}
