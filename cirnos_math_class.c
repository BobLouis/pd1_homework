#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%.4d %.4d %.4d",a,a-b+c,a-b+c-d);
    return 0;
}

