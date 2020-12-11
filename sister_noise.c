#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    int arr[10];
    int noise=0;
    int max=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            noise=(arr[i]+arr[j])*(j-i);
            if(noise>max){
                max=noise;
            }

        }
    }
    printf("%d",max);
    return 0;
}


