#include<stdio.h>
int devide(int x, int y){
    int result=x/y;
    if(x%y!=0){
        result = result +1;
    }

    return result;
}

int main()
{
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long int first_devide, second_devide,result;
    first_devide= devide(n,a);
    second_devide= devide(m,a);
    result= (first_devide*second_devide);

    printf("%lld", result);


}