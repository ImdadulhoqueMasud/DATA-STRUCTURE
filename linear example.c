#include<stdio.h>
void main()
{
    int n,searchOfelement,a[100],i;
    printf("Number of element :  ");
    scanf("%d",&n); ///n=How many number you need
    printf("store the value : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); ///a[]=Array
    printf("what is you search for : ");
    scanf("%d",&searchOfelement);
    for(i=0;i<n;i++)
    {
        if(searchOfelement==a[i])
        {
            printf("%d element of location : %d ",searchOfelement,i+1);
            break;
        }

    }
    if(i==n)
        printf("is not here.....");
}
