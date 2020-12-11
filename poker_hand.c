#include <stdio.h>
#include <stdbool.h>
#define NUM_RANK 13
#define NUM_SUIT 4
void read_card(int num);
void analyze_card(int num);

bool existCard [NUM_RANK][NUM_SUIT];
int biggest[4][3]={0};

int main(){
    int a[4]={0};
    char abc[]={'A','B','C','D'};
    int max;
    for(int i=0;i<4;i++){

        read_card(i);
        analyze_card(i);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
//            printf("%d ",biggest[i][j]);
        }
        a[i]=biggest[i][0]*1000+biggest[i][1]*10+biggest[i][2];
//        printf("\n");
    }
    for(int i=0;i<4;i++){
//        printf("%d\n",a[i]);
    }
    for(int j=0;j<4;j++){
        max=1;
        for(int i=0;i<4;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        for(int i=0;i<4;i++){
            if(a[i]==max){
                printf("%c ",abc[i]);
                a[i]=0;
            }
        }
    }
    return 0;
}

void read_card(int num){
    int rank,suit;
    char ch;
    for(int i=0;i<NUM_RANK;i++){
        for(int j=0;j<NUM_SUIT;j++){
            existCard[i][j]=0;
        }
    }
    int max=0;
    for(int i=0;i<5;i++){
        ch=getchar();
        switch(ch){
            case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
                rank=ch-'0'-2;
                break;
            case 'a':
                rank=12;
                break;
            case 't':
                rank=8;
                break;
            case 'j':
                rank=9;
                break;
            case 'q':
                rank=10;
                break;
            case 'k':
                rank=11;
                break;
        }
        if(rank>=max){
            biggest[num][1]=rank;
            max=rank;
        }
        ch=getchar();
        switch(ch){
            case 'C':case'c':
                suit=0;
                break;
            case 'D':case'd':
                suit=1;
                break;
            case 'H':case 'h':
                suit=2;
                break;
            case 'S':case 's':
                suit=3;
                break;
        }

        existCard[rank][suit]++;
        for(int i=0;i<4;i++){
            if(existCard[max][i]){
                suit=i;
            }
        }
        biggest[num][2]=suit;
        ch=getchar();
    }
//    for(int i=0;i<NUM_RANK;i++){
//        for(int j=0;j<NUM_SUIT;j++){
//            printf("%d",existCard[i][j]);
//        }
//        printf("\n");
//    }
}
void analyze_card(int num){
    int sum_rank[NUM_RANK];
    int sum_suit[NUM_SUIT];
    int continuity=0;
    int most_suit=0;
    int most_rank=0;
    int second_rank=0;
    int a2=0,b2=0,a3=0,a4=0;
    int big_suit=0;
    for(int i=0;i<NUM_RANK;i++){
        sum_rank[i]=0;
    }
    for(int i=0;i<NUM_SUIT;i++){
        sum_suit[i]=0;
    }
    int count=0;
    for(int i=0;i<NUM_RANK;i++){
        for(int j=0;j<NUM_SUIT;j++){
            sum_rank[i]+=existCard[i][j];
        }
    }
    for(int i=0;i<NUM_SUIT;i++){
        for(int j=0;j<NUM_RANK;j++){
            sum_suit[i]+=existCard[j][i];
        }
    }
//    printf("\n");
    for(int i=0;i<13;i++){
//        printf("%d ",sum_rank[i]);
        if(a2==0&&sum_rank[i]==2){
            a2=i;
        }else if(b2==0&&sum_rank[i]==2){
            b2=i;
        }else if(sum_rank[i]==3){
            a3=i;
        }else if(sum_rank[i]==4){
            a4=i;
        }
    }
    for(int i=0;i<NUM_RANK;i++){
        if(!sum_rank[i]){
            count=0;
        }
        if(sum_rank[i]){
            count++;
        }
        continuity=count>continuity?count:continuity;
    }
    for(int i=0;i<NUM_SUIT;i++){
        most_suit=sum_suit[i]>most_suit?sum_suit[i]:most_suit;
    }
    for(int i=0;i<NUM_RANK;i++){
        most_rank=sum_rank[i]>most_rank?sum_rank[i]:most_rank;
    }
    for(int i=0;i<NUM_RANK;i++){
        if(sum_rank[i]==most_rank){
            sum_rank[i]=0;
            break;
        }
    }
    for(int i=0;i<NUM_RANK;i++){
        second_rank=sum_rank[i]>second_rank?sum_rank[i]:second_rank;
    }
    if(continuity==5&most_suit==5){
//        printf("straight flush\n");
        biggest[num][0]=9;
        return ;
    }else if(most_rank==4){
//        printf("four-of-a-kind\n");
        biggest[num][0]=8;
        biggest[num][1]=a4;
        return ;
    }else if(most_rank==3&&second_rank==2){
//        printf("full house\n");
        biggest[num][0]=7;
        biggest[num][1]=a3;
        return ;
    }else if(most_suit==5){
//        printf("flush\n");
        biggest[num][0]=6;

        return ;
    }else if(continuity==5){
//        printf("straight\n");
        biggest[num][0]=5;
        return ;
    }else if(most_rank==3){
//        printf("three-of-a-kind\n");
        biggest[num][0]=4;
        biggest[num][1]=a3;
        return ;
    }else if(most_rank==2&&second_rank==2){
//        printf("two pairs\n");
        biggest[num][0]=3;
        biggest[num][1]=(a2>b2)?a2:b2;
        for(int i=0;i<4;i++){
            if(existCard[biggest[num][1]][i]){
                big_suit=i;
            }
        }
        biggest[num][2]=big_suit;
        return ;
    }else if(most_rank==2){
//        printf("pairs\n");
        biggest[num][0]=2;
        biggest[num][1]=a2;
        for(int i=0;i<4;i++){
            if(existCard[biggest[num][1]][i]){
                big_suit=i;
            }
        }
        biggest[num][2]=big_suit;
        return ;
    }else {
//        printf("high card");
        biggest[num][0]=1;
        return ;
    }
}
