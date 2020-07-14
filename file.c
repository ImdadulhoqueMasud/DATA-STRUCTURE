/*
  * sumUp IO.c
  *
  *  Created on: 24 Feb 2020
  *     Author: Mahmud
 */

#include <stdio.h>

int main()
{
    FILE *fp; //pointer to FILE
    int ch = 0;
    int lines = 0;
    int i = 0;

    if ((fp = fopen("F:/a.txt.txt","r")) != NULL)   //jodi file open hoy to read
    {
        while (!feof(fp))
        {
            ch = fgetc(fp); //fp stream theke next character ' new line ' kina sheta check korchi. newline pelei lines++.
            if (ch == '\n')
            {
                lines++;
            }
        }
        printf("Total lines found in file: %d\n\n", lines);
        fclose(fp);
        int var[lines]; //jotogulo lines, toto boro array to store inputs from file
        int sum = 0;
        fclose(fp); //close the file
        fp = fopen("F:/a.txt.txt","r");

        for (i = 0; i < lines; i++)
        {
            fscanf(fp, "%d\n", &var[i]); //jotokkhon file er shesh porjonto na pouchacche totokkhon scan //array file input theke initialize kore nicchi
            printf("printing line %d: %d\n", i, var[i]);
            sum += var[i]; //erpor protita songkha jog kore neya hocche
        }
        fclose(fp); //close the file
        printf("\nSumming up all the numbers...\nTotal: %d\n", sum);
    }
    else
    {
        printf("Could not open file");
    }
    return 0;
}
