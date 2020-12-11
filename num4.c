#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 32
int main(){
    int arr[1000][1000];
    int degree;
    int m,n;
    scanf("%d",&degree);
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);

        }
    }
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
    //90
    switch(degree) {
        case 90:
        for (int i = 0; i < n; i++) {
            for (int j = m - 1; j >= 0; j--) {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
        break;
        //180
        case 180:
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        break;
        //270
        case 270:
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < m; j++) {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
        printf("\n");
        break;
    }
    return 0;
}


