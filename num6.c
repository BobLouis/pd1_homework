#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[55][55]={0};

    int xo=(n-1)/2;
    int yo=0;
    int xv,yv;
    for(int i=1;i<=n*n;i++){
        arr[yo][xo]=i;
        xv=xo+1;
        yv=yo-1;
        if(xv>=n){
            xv-=n;
        }
        if(yv<0){
            yv+=n;
        }
        if(arr[yv][xv]!=0){
            xv=xo;
            yv=yo;
            yv++;
        }
        xo=xv;
        yo=yv;
    }

//    for(int i=1;i<=n*n;i++){
//        arr[y][x]=i;
//        x++;
//        y--;
//        if(x>=n){
//            x-=n;
//        }
//        if(y<0){
//            y+=n;
//        }
//        if(arr[y][x]!=0){
//            x--;
//            y+=2;
//        }
//    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

