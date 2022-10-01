#include <stdio.h>
int main(){
    int p_h=9;
    int w=p_h*2-1;
    int p_s=p_h-1;
    int i,k,j;
    for(i=p_h-1; i>=0; i--){
        for(j=p_s; j>i;j--){
            printf(" ");
        }
        for(k=1;k<=w;k++){
            printf("%c", (w-1)+65);
        }
        w-=2;
        printf("\n");
    }
    return 0;
}
