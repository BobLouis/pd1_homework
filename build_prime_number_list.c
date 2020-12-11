#include <stdio.h>
int main(){
    int a,b;
    int isprime=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        isprime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(i==1){
            continue;
        }
        if(isprime){
            printf("%d ",i);
        }
    }
    return 0;
}


