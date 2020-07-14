#include<stdio.h>
void main(){

int a[20],i,ina,h;
for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    ina=a[0];
    h=a[0];
for(i=0;i<4;i++){
    if(a[i]>ina)
        ina=a[i];
    else if(h>a[i])
        h=a[i];
}
printf("min = %d",h);
printf("\nmax = %d",ina);
}
