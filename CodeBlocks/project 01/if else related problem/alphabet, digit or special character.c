#include<stdio.h>
int main(){
    float a;
    char b;
    printf("Enter any character: ");
    scanf("%c",&b);
    if((b>='a' && b<='z')||(b>='A' && b<='Z')){
        printf("This is an Alphabet");
    }
    else {
        printf("This is a spacial chareacter");
    }
return 0;
}
