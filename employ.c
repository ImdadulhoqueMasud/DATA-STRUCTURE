#include<stdio.h>
void main()
{
    FILE *pt;
    long id;
    int i,fist_num,second_num,third_num,forth_num;
    float sum=0,avg=0;

    pt=fopen("F:/MGK//employ.txt","r");
    for(i=0; i<10; i++)
    {
        fscanf(pt,"%ld%d%d%d%d",&id,&fist_num,&second_num,&third_num,&forth_num);
        printf("%ld\t %d\t %d\t %d\t \t%d \n",id,fist_num,second_num,third_num,forth_num);

    }
    fclose(pt);

    printf(".......................\n");
    printf("Total student 10 : ");
    int stu_amo;
    scanf("%d",&stu_amo);
    pt=fopen("F:/MGK//employ.txt","r");
    for(i=0; i<stu_amo; i++)
    {
        fscanf(pt,"%ld%d%d%d%d",&id,&fist_num,&second_num,&third_num,&forth_num);
        sum=fist_num+second_num+third_num+forth_num;
        avg=sum/4;
        printf("\nsum = %.2f\tAvg = %.2f",sum,avg);
    }
    fclose(pt);
    printf(" ..\n..............\n");

}
