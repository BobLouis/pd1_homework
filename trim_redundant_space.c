#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char ch=0;
    int space=0;
    while((ch=getchar())!='\n'){
        if(ch!=' '){
            putchar(ch);
            space=0;
        }
        if(ch==' '){
            if(space==0){
                putchar(' ');
                space=1;
            }
        }
    }

    return 0;
}



