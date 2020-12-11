#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%6.4d\n",a);
    printf("+)%.4d\n",b);
    printf("------\n");
    printf("%.6d",a+b);
    return 0;
}
