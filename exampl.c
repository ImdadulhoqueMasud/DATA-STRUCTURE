#include<stdio.h>
void main(){
float A[6] = {1.0,2.0,1.0,0.5,3.0,21.0};
printf("\nhhh: %f\n",A[5]);
float *M = &(A[5]);
float *i = &(A[4]);
while (i >= &(A[0]))
{
    if (*i > *M)
        M = i;
    i--;
}
printf("%.1f\n",*M);
}
