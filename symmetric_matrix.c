#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){

    int arr [1000][1000];
   int n;
   scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                printf("No\n");
                return -1;
            }
        }

    }
    printf("Yes\n");
    return 0;
}
