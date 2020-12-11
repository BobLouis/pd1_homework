#include <stdio.h>
#include <math.h>
#define pi 3.14f

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d",(b>c)?b:c);
    }else if(b>c&&b>a){
        printf("%d",(a>c)?a:c);
    }else if(c>b&&c>a){
        printf("%d",(b>a)?b:a);
    }else {
        if(a==b){
            printf("%d",a);
        }else if(b==c){
            printf("%d",c);
        }else if(c==a){
            printf("%d",a);
        }
    }
    return 0;
}
