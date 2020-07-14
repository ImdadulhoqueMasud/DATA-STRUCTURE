#include<stdio.h>
#include<stdlib.h>
void main(){
int* dyn_arr;
int n;
scanf("%d",&n);
size_t num_bytes=sizeof(int)*n;
printf("byt check %d\n",num_bytes);
 dyn_arr=(int*)malloc(num_bytes);  //void pointer converd to int pointer
int i;
for(i=0;i<n;i++)
    scanf("%d",&dyn_arr[i]);
    printf("output : ");
    printf("\n");
for(i=0;i<n;i++)
    printf("%d\n",dyn_arr[i]);

free(dyn_arr);
}
