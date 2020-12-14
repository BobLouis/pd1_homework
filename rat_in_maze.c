#include <stdio.h>
#include <stdbool.h>
#define n 5

bool visit(char(*)[n], int(*)[n], int, int);
int main(void) {
    char maze[n][n];
    int route[n][n];
    // initialize maze and route matrices
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            route[i][j]=0;
            scanf("%c", &maze[i][j]);
            getchar();
        }
    }
    if (visit(maze, route, 0, 0)) { // (0,0) is a starting point
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++)
                printf("%d ", route[i][j]);
            printf("\n");
        }
    } else {
        printf("Can't find the exit!");
    }
    return 0;
}
// Your code goes here

bool visit(char maze[][n], int route[][n], int X, int Y) {
//    printf("%c",*(*maze+1));
    *(*(maze+Y)+X)='s';
    if(X==4&&Y==4){
        for(int y=0;y<n;y++){
            for(int x=0;x<n;x++){
                if(*(*(maze+y)+x)=='s'){
                    *(*(route+y)+x)=1;
                }else{
                    *(*(route+y)+x)=0;
                }
            }
        }
        //printf("inner sucess");
        return 1;
    }
    //down->right->up->left
    if(*(*(maze+Y+1)+X)=='r'&& Y+1<n) {
        if(visit(maze, route, X, Y + 1)){
            return 1;
        }else
            return 0;
    }else if(*(*(maze+Y)+X+1)=='r' && X+1<n){
        if(visit(maze,route,X+1,Y)){
            return 1;
        }else
            return 0;
    }else if(*(*(maze+Y-1)+X)=='r'&& Y-1>=0){
        if(visit(maze,route,X,Y-1)){
            return 1;
        }else
            return 0;
    }else if(*(*(maze+Y)+X-1)=='r'&& X-1>=0){
        if(visit(maze,route,X-1,Y)){
            return 1;
        }else
            return 0;
    }
    //if can't find the way trace the way back and  mark as 'b'
    *(*(maze+Y)+X)='b';
    if(*(*(maze+Y+1)+X)=='s'&& Y+1<n) {
        if(visit(maze,route,X,Y+1)){
            return 1;
        }else
            return 0;
    }else if(*(*(maze+Y)+X+1)=='s' && X+1<n){
        if(visit(maze,route,X+1,Y)){
            return 1;
        }else
            return 0;
    }else if(*(*(maze+Y-1)+X)=='s'&& Y-1>=0){
        if(visit(maze,route,X,Y-1)){
            return 1;
        }else
            return 0;
    }else if(*(*(maze+Y)+X-1)=='s'&& X-1>=0){
        if(visit(maze,route,X-1,Y)){
            return 1;
        }else
            return 0;
    }
}
