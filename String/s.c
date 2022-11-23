
#include<stdio.h>
#include<string.h>
int main(){

    char str1[100]="Ami";
    char str2[100]="Tmi";

    int l1= strlen(str1);
    int l2 = strlen(str2);
    int i=0;
    while(l2!=0){
            str1[l1]=str2[i];
            l1++;
            i++;
            l2--;

    }

    printf("%s",str1);

}
