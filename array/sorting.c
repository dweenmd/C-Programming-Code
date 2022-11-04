//bubble sort
#include<stdio.h>
int main(){

    int arr[]={-2,0,-9,17,8};
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size-1;i++){// Outer loop for steps
       for(int j=0;j<size-i-1;j++){ //Inner loop for comparison and swap
        if(arr[j]>arr[j+1]){
            int temp= arr[j]; // swap 
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }
    }

//    for(int i=0; i<size; i++){
//        printf("%d ", arr[i]);
//     }
    printf("%d ", arr[size-2]);



}
