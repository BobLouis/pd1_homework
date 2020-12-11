#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    char ch;
    int i=0;
    while((ch=getchar())!='\n'&& i++<20){
        switch(ch){
            case 'A':
                putchar('C');
                break;
            case 'B':
                putchar('R');
                break;
            case 'C':
                putchar('W');
                break;
            case 'D':
                putchar('Z');
                break;
            case 'E':
                putchar('G');
                break;
        }
    }
    
    return 0;
}
