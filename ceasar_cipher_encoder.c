#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    unsigned char ch;
    int k;
    scanf("%d",&k);
    k%=26;
    scanf("\n");
    while((ch=getchar())!='\n'){
        if('A'<=ch&&ch<='Z'){
            ch+=k;
            if(ch>'Z'){
                ch-=26;
            }
            if(ch<'A'){
                ch+=26;
            }
        }
        if('a'<=ch&&ch<='z'){
            ch+=k;
            if(ch>'z'){
                ch-=26;
            }
            if(ch<'a'){
                ch+=26;
            }
        }
        putchar(ch);
    }

    return 0;
}


