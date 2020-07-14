#include<stdio.h>
#include<stdlib.h>
int* dyn_array;
void dynamic1(int y){

int i;
for(i=0;i<y;i++)
    scanf("%d",&dyn_array[i]);
for(i=0;i<y;i++)
printf("\n %d\t",dyn_array[i]);
//fprintf(fil,"dyn : %d",dyn_array[i]);
}

void main(){
FILE* fil;
fil=fopen("tst.txt","r+");
int n;

scanf("%d",&n);
fscanf(fil,"%d",&n);
size_t masud=sizeof(int)*n;
fprintf(fil,"byt : %d",masud);
dyn_array=(int*)malloc(masud);

dynamic1(n);
free(dyn_array);
fclose(fil);
}
