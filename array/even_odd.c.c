#include<stdio.h>
int main(){

    int arr[]={21,22,55,44,33};//5 elements

    for(int i=0;i<5;i++){//i<5 means the size of arr elements

        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }

}
