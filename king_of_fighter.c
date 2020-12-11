#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int attack;
    char round=1;
    while(a>0&&b>0){
        scanf("%d",&attack);
        if(round){
            b-=attack;
            round=0;
        }else {
            a-=attack;
            round=1;
        }

    }
    printf("%c",(a<b)?'B':'A');
    return 0;
}


