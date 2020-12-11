#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int m,n;
    long long ans=1;
    scanf("%d%d",&m,&n);
    if(2*n>m){
        n=m-n;
    }
    for(int i=0;i<n;i++){
        ans=ans*(m-i)/(i+1);
    }
    printf("%lld",ans);
//    printf("%d",sizeof(long));
    return 0;
}


