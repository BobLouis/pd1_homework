i#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    int arr1[32];
    int arr2[32];
    int ans[32]={0};
    char ch=0;
    int i=0;
    int carry =0;
    while((ch=getchar())!='\n'){
        if(ch!=' '){
            arr1[i++]=ch-'0';
        }
    }
    i=0;
    while((ch=getchar())!='\n'){
        if(ch!=' '){
            arr2[i++]=ch-'0';
        }
    }
    for(int i=N-1;i>=0;i--){
        if(carry){
            ans[i]=!(arr1[i]^arr2[i]);
            carry=(arr1[i]||arr2[i]);
        }else{
            ans[i]=(arr1[i]^arr2[i]);
            carry=(arr1[i]&arr2[i]);
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}


