#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    int h,m;
    scanf("%d%d",&h,&m);
    m+=50;
    if(m>=60){
        h++;
        m-=60;
    }
    printf("%.2d:%.2d\n",h,m);
    return 0;
}
