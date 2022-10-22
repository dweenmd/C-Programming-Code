#include<stdio.h>
int main(){

    int arr[]={33,22,55,44,21,33,44,77,88};
    int max=0;
    int min=999999;
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Max value is: %d\n",max);
    printf("Min value is: %d",min);

}
