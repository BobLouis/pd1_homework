#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    int n;
    double a,b,c;
    scanf("%d%",&n);
    switch(n){
        case 1:
            scanf("%lf",&a);
            printf("%.2lf",a*a*a);
            break;
        case 2:
            scanf("%lf%lf%lf",&a,&b,&c);
            printf("%.2lf",a*b*c);
            break;
        case 3:
            scanf("%lf%lf",&a,&b);
            printf("%.2lf",3.14*a*a*b);
            break;
        case 4:
            scanf("%lf",&a);
            printf("%.2lf",(sqrt(2)/12)*a*a*a);
            break;
    }

    return 0;
}


