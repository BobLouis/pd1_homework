#include <stdio.h>
#include<stdbool.h>

#define M 5
#define N 8
char colors[4] = {'R', 'G', 'B', 'X'};   // Red, Green, Blue, Empty

void spread(char*, int, int);

int main(void) {
    char graph[M][N];
    int row, col;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            scanf("%c", &graph[i][j]);
        getchar();      // Ignore '\n'
    }
    scanf("%d %d", &row, &col);    // Starting position

    spread(&graph[0][0], row, col);

//     Print out the spreading result
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            printf("%c", graph[i][j]);
        printf("\n");
    }
    return 0;
}
void spread(char* graph, int row, int col) {
//    printf("%c",*(graph+col+N*row));
    char color=*(graph+col+N*row);
    char rgb[]={'R','G','B','A'};
    int spec[]={0,1,2};
    switch(*(graph+col+N*row)){
        case 'R' :
            spec[0]=3;
            break;
        case 'G' :
            spec[1]=3;
            break;
        case 'B' :
            spec[2]=3;
            break;
    }
    int i=1;
    //upward
    while(row-i>=0){
        if(*(graph+col+N*(row-i))==rgb[spec[0]])
            break;
        if(*(graph+col+N*(row-i))==rgb[spec[1]])
            break;
        if(*(graph+col+N*(row-i))==rgb[spec[2]])
            break;
        *(graph+col+N*(row-i))=color;
        i++;
    }
    //dowanward
    i=1;
    while(row+i<M){
        if(*(graph+col+N*(row+i))==rgb[spec[0]])
            break;
        if(*(graph+col+N*(row+i))==rgb[spec[1]])
            break;
        if(*(graph+col+N*(row+i))==rgb[spec[2]])
            break;
        *(graph+col+N*(row+i))=color;
        i++;
    }
    //right
    i=1;
    while(col+i<N){
        if(*(graph+col+i+N*(row))==rgb[spec[0]])
            break;
        if(*(graph+col+i+N*(row))==rgb[spec[1]])
            break;
        if(*(graph+col+i+N*(row))==rgb[spec[2]])
            break;
        *(graph+col+i+N*(row))=color;
        i++;
    }
    //left
    i=1;
    while(col-i>=0){
        if(*(graph+col-i+N*(row))==rgb[spec[0]])
            break;
        if(*(graph+col-i+N*(row))==rgb[spec[1]])
            break;
        if(*(graph+col-i+N*(row))==rgb[spec[2]])
            break;
        *(graph+col-i+N*(row))=color;
        i++;
    }

}
