#include<stdio.h>
#include<string.h>
int main(){

    char token[1000];
    gets(token);

    int len = strlen(token);

    for(int i=0; i<len; i++){
        if(token[i]==' ')
            printf("\n");
        else
            printf("%c",token[i]);
    }
}
