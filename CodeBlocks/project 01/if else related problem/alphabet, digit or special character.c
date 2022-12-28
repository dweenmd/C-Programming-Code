#include<stdio.h>
int main(){
    float a;
    char b;
    printf("Enter any character: ");
    scanf("%f%c",&a,&b);
    if((b>='a' && b<='z')||(b>='A' && b<='Z')){
        printf("This is an Alphabet");
    }
    else if (a>='0'&& a<='9'){
        printf("This is a Digit");
    }
    else {
        printf("This is a spacial chareacter");
    }
return 0;
}
