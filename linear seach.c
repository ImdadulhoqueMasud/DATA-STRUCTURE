#include<stdio.h>
//#include<stdlio.h>

void main()
{
    int a[100],i,seach,n;
    printf("Number of N type element : ");
    scanf("%d",&n);
    printf("\nEnter the element of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nwhat item are you find : ");
    scanf("%d",&seach);
    for(i=0;i<n;i++)
    {
        if(seach==a[i])
        {
            printf("\n%d item found location is : %d",seach,i+1);
            break;
        }

        if(i>n)
            printf("\n this item is exist..... ");
        else
            printf("not ");
    }
}
