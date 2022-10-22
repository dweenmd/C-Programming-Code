#include<stdio.h>
int main(){

    int arr[]={33,22,55,44,21,33,44,77,88};
    int even=0;
    int odd=0;
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Count Even  is: %d\n",even);
        printf("Count odd  is: %d\n",odd);

}

