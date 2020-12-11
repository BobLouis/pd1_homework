#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    int n;
    int arr[100];

    scanf("%d",&n);
    int ch;
    int i=0;
    getchar();
    while((ch=getchar())!='\n'&&i<n){
        arr[i++]=ch-'a';
    }
    i=0;
    while((ch=getchar())!='\n'){
        if('a'<=ch&&ch<='z'){
            ch+=arr[i++];
            if(ch>'z'){
                ch-=26;
            }
        }
        if('A'<=ch&&ch<='Z'){
            ch+=arr[i++];
            if(ch>'Z'){
                ch-=26;
            }
        }
        if(i>n-1){
            i=0;
        }
        putchar(ch);
    }


    return 0;
}


