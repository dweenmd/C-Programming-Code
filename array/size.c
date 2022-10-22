#include<stdio.h>
int main(){

    int arr[]={21,22,55,44,33,33,44,77,88};//total 9 elements
    int sum=0;
    int size= sizeof(arr)/sizeof(arr[0]);//shortcut method of arry's element
    //size of arr is (9*4)bit/4 bit= total 9 elements
    for(int i=0;i<size;i++){

        printf("%d index: value %d memory is: %d\n", i, arr[i], &arr[i]);
    }



}


