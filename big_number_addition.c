#include<stdio.h>
#include<string.h>

void add(char a[], char b[], char res[]);

int main(){
    char a[100], b[100], res[105];
    scanf("%s %s", a, b);
    add(a, b, res);
    printf("%s", res);
    return 0;
}
void add(char a[], char b[], char res[]){
    char sum[105];
    char temp[100];
    memset(sum,'\0',105);
    int num=0,i=0;
    int carry=0;
    int len_a=strlen(a);
    int len_b=strlen(b);
    int len = (len_a>len_b)?len_a:len_b;
    if(len_a>len_b){
        strcpy(temp,b);
        memset(b,'0',len);
        for(int i=len_a-len_b;i<len_a;i++){
            b[i]=temp[i-(len_a-len_b)];
        }
        b[len]='\0';
    }
    if(len_b>len_a){
        strcpy(temp,a);
        memset(a,'0',len);
        for(int i=len_b-len_a;i<len_b;i++){
            a[i]=temp[i-(len_b-len_a)];
        }
        a[len]='\0';
    }
//    printf("%s ",a);
//    printf("%s", b);
    printf("\n");

    while(len-i>0){
        num=((*(a+len-i-1)-'0')+(*(b+len-i-1)-'0'));
//        printf("\n%d %d",(*(a+len-i-1)-'0'),(*(b+len-i-1)-'0'));
//        printf("%d ",num);
        sum[i++]=(num+carry)%10+'0';
        carry=(num+carry)/10;
    }

    if(carry>0){
        sum[i]='1';
    }
    for(int i=0;i<strlen(sum);i++,res++){
        *res=sum[strlen(sum)-i-1];
//        printf("%c",*res);
    }
    *res='\0';
}
// Your code goes here
