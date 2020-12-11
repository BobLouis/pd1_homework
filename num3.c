#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    int arr1[10]={0};
    int arr2[10]={0};
    int ans[20]={0};
    int a1,a2;
    scanf("%d%d",&a1,&a2);
    for(int i=0;i<a1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<a2;i++){
        scanf("%d",&arr2[i]);
    }
//    for(int i=0;i<a1;i++){
//        printf("%d ",arr1[i]);
//    }
//    for(int i=0;i<a2;i++){
//        printf("%d ",arr2[i]);
//    }
    int b1=0,b2=0;
    for(int i=0;i<a1+a2;i++){
        if(arr1[b1]==0){
            ans[i]=arr2[b2];
            b2+=1;
            continue;
        }
        if(arr2[b2]==0){
            ans[i]=arr1[b1];
            b1+=1;
            continue;
        }
        if(arr1[b1]<arr2[b2]){
            ans[i]=arr1[b1];
            b1+=1;
        }else {
            ans[i]=arr2[b2];
            b2+=1;
        }
    }
    for(int i=0;i<a1+a2;i++){
        printf("%d ",ans[i]);
    }

    return 0;
}


