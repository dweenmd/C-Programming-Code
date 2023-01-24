#include<stdio.h>
int main(){
    char ch;
    printf("Enter a word:");
    scanf("%c", &ch);
    if(ch>='a'&& ch <='z'){
        printf("The word is lower case\n",ch);
    }
    else if (ch>='A'&& ch<='Z'){
        printf("The word is upper case\n",ch);
    }
    return 0;
}
