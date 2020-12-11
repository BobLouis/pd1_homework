#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    int n;
    scanf("%d",&n);
    switch(n/1000){
        case 3:
            printf("MMM");
            break;
        case 2:
            printf("MM");
            break;
        case 1:
            printf("M");
            break;
    }
    n-=1000*(n/1000);
    switch(n/100){
        case 9:
            printf("CM");
            break;
        case 8:
            printf("DCCC");
            break;
        case 7:
            printf("DCC");
            break;
        case 6:
            printf("DC");
            break;
        case 5:
            printf("D");
            break;
        case 4:
            printf("CD");
            break;
        case 3:
            printf("CCC");
            break;
        case 2:
            printf("CC");
            break;
        case 1:
            printf("C");
            break;
    }
    n-=100*(n/100);
    switch(n/10){
        case 9:
            printf("XC");
            break;
        case 8:
            printf("LXXX");
            break;
        case 7:
            printf("LXX");
            break;
        case 6:
            printf("LX");
            break;
        case 5:
            printf("L");
            break;
        case 4:
            printf("XL");
            break;
        case 3:
            printf("XXX");
            break;
        case 2:
            printf("XX");
            break;
        case 1:
            printf("X");
            break;

    }
    switch(n%10){
        case 9:
            printf("IX");
            break;
        case 8:
            printf("VIII");
            break;
        case 7:
            printf("VII");
            break;
        case 6:
            printf("VI");
            break;
        case 5:
            printf("V");
            break;
        case 4:
            printf("IV");
            break;
        case 3:
            printf("III");
            break;
        case 2:
            printf("II");
            break;
        case 1:
            printf("I");
            break;
    }
    return 0;
}
