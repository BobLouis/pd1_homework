i#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int addition(char str[]);

int main() {
    char str[N];
    scanf("%s", str);
    int sum = addition(str);
    printf("%d", sum);
    return 0;
}
// Your code goes here
int addition(char str[]){
    int sum=0,i=0;
    int len=strlen(str);
    while(*str) {
        char num[10] = {'\0'};
        for (; *str != '+' && *str; str++) {
            strncat(num, str, 1);
        }
        sum+=atoi(num);
        str++;
    }
    return sum;
}

