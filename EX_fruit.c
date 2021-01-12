#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20000

void find_fruit(char input[],char fruit[][15]);

int main(void) {
    char fruit[20][15] = {
            "guava",
            "litchi",
            "longan",
            "watermelon",
            "pomelo",
            "pear",
            "banana",
            "papaya",
            "pumpkin",
            "tomato",
            "mango",
            "kiwi",
            "persimmon",
            "cantaloupe",
            "strawberry",
            "grape",
            "peach",
            "orange",
            "coconut",
            "lemon"
    };
    char input[N];
    scanf("%s", input);
    find_fruit(input,fruit);
    return 0;
}
void find_fruit(char input[],char fruit[][15]){
// input is the fruit sequence eg: watermelon+_+watermelon+_+coconut+_+grape+_+coconut
// fruit is 20 kinds of fruit name eg: fruit[0] is "guava", fruit[1] is litchi and so on.
// you need to check the Loader code to understand above meaning
    int time[20]={0};
    char *p=input;
    int i;
    char element[15];
    while(*p!='\0') {
        i=0;
        memset(element,'\0',15);
        while (*p != '+'&&*p!='\0') {
            element[i++] = *p;
            p++;
        }
//        printf("%s ",element);
        for(int i=0;i<20;++i){
            if(strcmp(fruit[i],element)==0){
                time[i]++;
//                printf("time%d ",time[i]);
            }
        }
        p+=3;
        element[i] = '\0';
    }
    int max=0;
    for(int i=0;i<20;i++){
        if(time[i]>max)
            max=time[i];
    }
//    printf("%d",max);
    for(int i=0;i<20;i++){
        if(time[i]==max){
            printf("%s\n",fruit[i]);
        }
    }
}

