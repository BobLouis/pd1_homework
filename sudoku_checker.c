#include <stdio.h>
#define NUM 9

void check_sudoku(int (*grid_p)[NUM]);
void nineConvert(int *grid,int row,int col);
int main(void){
    int grid[NUM][NUM]; // sudoku puzzle
    for(int i = 0; i < NUM; ++i){
        for(int j = 0; j < NUM; ++j) {
            scanf("%d", &grid[i][j]);
        }
    }
    check_sudoku(grid);
    return 0;
}
int output[NUM][NUM]={0};
void check_sudoku(int (*grid_p)[NUM]){
    for(int i=0;i<NUM;i++){
        for(int j=0;j<NUM;j++){
            for(int k=j+1;k<NUM;k++){
                if(*((*(grid_p+i))+j)==*((*(grid_p+i))+k)){
//                    printf("%d %d",i ,j);
                    output[i][j]++;
//                    printf("\n%d %d",i,k);
                    output[i][k]++;
                }
            }
        }
    }
    for(int i=0;i<NUM;i++){
        for(int j=0;j<NUM;j++){
            for(int k=j+1;k<NUM;k++){
                if(*((*(grid_p+j))+i)==*((*(grid_p+k))+i)){
//                    printf("%d %d",j ,i);
                    output[j][i]++;
//                    printf("\n%d %d",k,i);
                    output[k][i]++;
                }
            }
        }
    }
    for(int i=0;i<NUM;i+=3){
        for(int j=0;j<NUM;j+=3){
            nineConvert(grid_p,i,j);
        }
    }
    for(int i=0;i<NUM;i++){
        for(int j=0;j<NUM;j++){
            if(output[i][j]){
                printf("(%d,%d)\n",i,j);
            }
        }
//        printf("\n");
    }

}
void nineConvert(int *grid,int row,int col){
    int nineArr[NUM];
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(nineArr+count++)=*(grid+j+col+9*(row+i));
//            printf("%d",*(grid+j+col+9*(row+i)));
        }
    }
//    printf("%d",*grid);
    for(int i=0;i<NUM;i++){
        for(int j=i+1;j<NUM;j++){
            if(*(nineArr+i)==*(nineArr+j)){
//                printf("\n%d %d",row+i/3,col+i%3);
                output[row+i/3][col+i%3]++;
//                printf("\n%d %d",row+j/3,col+j%3);
                output[row+j/3][col+j%3]++;
            }
        }
    }
}
