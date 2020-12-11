#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    int a,b,c;
    int arr[12];
    scanf("%d%d%d",&a,&b,&c);
    arr[0]=a;
    for(int i=6;i>=1;i--){
        arr[i]=b%10;
        b/=10;
    }
    for(int i=11;i>=7;i--){
        arr[i]=c%10;
        c/=10;
    }
//    for(int i=0;i<=11;i++){
//        printf("%d ",arr[i]);
//    }
    int flag=1;
    for(int i=0;i<12;i++){
        if(flag){
            flag=0;
        }else {
            arr[i]*=3;
            flag=1;
        }
    }
    int sum=0;
    for(int i=0;i<=11;i++){
        sum+=arr[i];

    }
    printf("%d",(10-(sum%10))%10);
    return 0;
}
