#include <stdio.h>
#include <math.h>
#define pi 3.14f
void month(int space,int day){
    int ret=0;
    for(int i=0;i<space;i++){
        printf("    ");

        ret++;
    }
    for(int i=1;i<=day;i++){
        if(ret>=7){
            printf("\n");
            ret=0;
        }
        printf("%3d ",i);

        ret++;
    }
}
int main(){
    int input ;
    scanf("%d",&input);
    printf("Sun Mon Tue Wed Thu Fri Sat \n");
    int space=0,day=0;
    switch(input){
        case 1:
            space=3;
            day=31;
            break;
        case 2:
            space=6;
            day=29;
            break;
        case 3:
            space =0;
            day=31;
            break;
        case 4:
            space=3;
            day=30;
            break;
        case 5:
            space=5;
            day=31;
            break;
        case 6:
            space=1;
            day=30;
            break;
        case 7:
            space=3;
            day=31;
            break;
        case 8:
            space=6;
            day=31;
            break;
        case 9:
            space=2;
            day=30;
            break;
        case 10:
            space=4;
            day=31;
            break;
        case 11:
            space=0;
            day=30;
            break;
        case 12:
            space=2;
            day=31;
            break;
    }
    month(space,day);
    return 0;
}


