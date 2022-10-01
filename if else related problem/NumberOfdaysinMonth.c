#include<stdio.h>
int main(){
    int a;
    printf("Enter a month number(1-12):");
    scanf("%d",&a);
    if(a==1){
        printf("This is 'January' and it's contain 31 days");
    }
    else if(a==2){
        printf("This is 'February' and it's contain 28 days");
    }
    else if(a==3){
        printf("This is 'March' and it's contain 31 days");
    }
    else if(a==4){
        printf("This is 'April' and it's contain 30 days");
    }
    else if(a==5){
        printf("This is 'May' and it's contain 31 days");
    }
    else if (a==6){
        printf("This is 'June' and it's contain 30 days");
    }
    else if(a==7){
        printf("This is 'July' and it's contain 31 days");
    }
    else if(a==8){
        printf("This is 'August' and it's contain 31 days");
    }
    else if(a==9){
        printf("This is 'september' and it's contain 30 days");
    }
    else if(a==10){
        printf("This is 'October' and it's contain 31 days");
    }
    else if(a==11){
        printf("This is 'November' and it's contain 30 days");
    }
    else if(a==12){
        printf("This is 'December' and it's contain 31 days");
    }
    else{
        printf("it's not a month number");
    }
    return 0;
}
