#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
       ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ){
        printf("The character is a vowel");
    }
    else if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
 {
       printf("The character is a consonent");
    }
    else {
         printf("This is not a character. ");
    }
    return 0;
}
