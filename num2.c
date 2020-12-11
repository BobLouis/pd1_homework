#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    double r;
    long n;
    scanf("%lf%ld",&r,&n);

    printf("%d",(long)pow(r,n));
    return 0;
}


