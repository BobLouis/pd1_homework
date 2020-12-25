#include<stdio.h>
#include<string.h>
#define N 10

typedef struct dict_t_struct {
    char word[10];
    int page;
} dict_t;

int search(dict_t arr[], char target[]);

int main() {
    dict_t dictionary[N];
    char targetWord[10];

    for(int i=0; i<N; i++)
        scanf("%s %d\n", dictionary[i].word, &dictionary[i].page);

    scanf("%s", targetWord);
    int targetPage = search(dictionary, targetWord);
    printf("%d", targetPage);
    return 0;
}

// Your code goes here
int search(dict_t arr[], char target[]){
    dict_t* origin =arr;
    while(arr-origin<N){
        if(!strcmp((arr)->word,target)){
            return arr->page;
        }
        arr++;
    }
    return 0;

}

