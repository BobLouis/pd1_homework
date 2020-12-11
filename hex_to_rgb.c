#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char arr[6];
//    scanf("#");
    char ch=0;
    int i=0;
    getchar();
    while((ch=getchar())!='\n'&&i<6){
        if('0'<=ch&&ch<='9'){
            ch-='0';
        }else{
            ch-=('A'-10);
        }
        arr[i++]=ch;
    }

    printf("rgb(%d,%d,%d)",arr[0]*16+arr[1],arr[2]*16+arr[3],arr[4]*16+arr[5]);


    return 0;
}


