#include<stdio.h>
#include<string.h>
int main(){
    int t,n,x, arr[1000],res=0;
    char ch[100];
    scanf("%d",&t);

    while(t--){

        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<n;j++){
            scanf("%d", &x);
            scanf("%s", &ch);
                int length= strlen(ch);
                int z=0;
                while(length--){
                    if(ch[z]=='D'||ch[z]=='d'){
                        arr[j]=arr[j]+1;
                    }
                    else{
                        arr[j]=arr[j]-1;
                    }

                    z++;
                }
                if(arr[j]>=0){
                    printf("%d\n",(arr[j]%10));
                }
                else
                    printf("%d\n",(arr[j]+10));



        }

    }

}
