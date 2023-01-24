#include<stdio.h>
int main(){
    //afjjhsdjhfka
    int arr[]={33,22,55,44,21,33,44,77,88};
    int arr1[100];
    int even=0;
    int odd=0;
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
            arr1[i]=arr[i];
    }
    printf(" New Array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr1[i]);
    }

}


