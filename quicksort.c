#include <stdio.h>
#include <stdlib.h>

#define N (sizeof(a)/sizeof(a[0]))

int split(int a[],int low,int high){
    int middle=(low+high)/2;
    int pivot=a[low];

    while(1){
        while(low<high&& pivot<=a[high])
            high--;
        if(low>=high) break;
        a[low++]=a[high];
        while(low<high&&a[low]<=pivot)
            low++;
        if(low>=high) break;
        a[high--]=a[low];
    }
    a[high]=pivot;
    return low;
}
void sort(int a[] ,int low,int high){
    int index;
    if(low>=high){
        return;
    }

    index=split(a,low,high);
//    printf("\n");
//    for(int i=0;i<19;i++){
//        printf("%d ",a[i]);
//    }
    sort(a,low,index-1);
    sort(a,index+1,high);
}


int main() {
    int a[] = {1, 1, 5, 4, 2, 9, 8, 7, 6,44,33,35,32,11,23,15,1,2,2};
    int index, pivot;
    sort(a, 0, N - 1);
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }


    return 0;
}

