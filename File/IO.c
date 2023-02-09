#include <stdio.h>
main ()
{
 FILE *fp;
 float total;
 fp = fopen("data.txt", "w+");
 if (fp == NULL) {
 printf("data.txt does not exist, please check!\n");
 exit (1);
 }
 fprintf(fp, "%d",100);
 fscanf(fp, "%f", &total);
 fclose(fp);
 printf("Value of total is %f\n", total);
}