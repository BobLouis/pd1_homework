#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    int s,x,n;
    scanf("%d%d%d",&n,&s,&x);
    x+=s;
    if(x>=n){
        x-=(x/n)*n;
    }
    printf("%d",x);

    return 0;
}
