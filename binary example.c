#include<stdio.h>

void main()
{
    int i,fist,last,n,search,a[100],mid;
    printf("enter the number of element 'N': ");
    scanf("%d",&n);
    printf("\nvalue store: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nwhat value are looking for : ");
    scanf("%d",&search);
    fist=0;
    last=n-1;
    mid=(fist+last)/2;
    while(fist<=last)
    {
        if(a[mid]<search)
            fist =mid+1;
        else if(a[mid]==search)
        {
            printf("\n%d location of the element : %d",search,mid);
            break;
        }
        else
            last = mid-1;
        mid=(fist+last)/2;
        if(fist>last)
            printf("%d this element is not found\n",search);
            printf("-1");

    }
}
