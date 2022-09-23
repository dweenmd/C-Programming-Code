#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,x1,x2;
    printf("Enter the value (aX^2+bx+c) of a,b,c:");
    scanf("%f%f%f", &a,&b,&c);
    d=b*b-4*a*c;

    if (d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1 = %.2f, X2 = %.2f\n", x1,x2);
    }
    else if (d=0){
        x1=(-b/(2*a));
        printf("x1 = %.2f, X2 = %.2f\n", x1,x1);
    }
    
    else{
        x1=(-b/(2*a));

        x2=sqrt(-d)/(2*a);
        printf("Roots are = %.2f+i%.2f and %.2f-i%.2f\n", x1,x2,x1,x2);
    }
    return 0;

}