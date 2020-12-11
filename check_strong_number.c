#include <stdio.h>
#include <math.h>
#define pi 3.14f
int factor(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        x*=i;
    }
    return x;
}
int main(){
    int ori,a;
    int sum=0;

    scanf("%d",&ori);
    a=ori;
    while(a!=0){
        sum+=factor(a%10);
       // printf("%d ",sum);
        a/=10;
    }
    printf("%d is %sa strong number.",ori,(sum==ori)?"":"not ");

    return 0;
}
