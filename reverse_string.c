#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    int n;
    scanf("%d",&n);
    char arr[1000];
    char ch=0;
    int i=0;
    getchar();
    while((ch=getchar())!='\n'&&i<n){
        arr[i++]=ch;
    }
    for(int i=n-1;i>=0;i--){
        putchar(arr[i]);
    }
    return 0;
}


