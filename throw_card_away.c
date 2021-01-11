#include<stdio.h>
#include <stdlib.h>

int main(){
    int n,m,tmp;
    int *p;
    scanf("%d%d",&n,&m);
    p=malloc(sizeof(int)*n);
    for(int i=0;i<n;++i){
        *(p+i)=i+1;
    }
    for(int i=0;i<m;++i){
        printf("%d ",*p);
        tmp=*(p+1);
        for(int j=0;j<n-i-2;++j){
            *(p+j)=*(p+j+2);
        }
        *(p+n-2-i)=tmp;
    }
    return 0;

}

