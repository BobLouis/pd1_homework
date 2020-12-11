#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
   int a;
   scanf("%d",&a);
   if(a<1){
       printf("Calm");
   }else if(a>=1 && a<=3){
       printf("Light air");
   }else if(a>=4&&a<=27){
       printf("Breeze");
   }else if(a>=28&&a<=47){
       printf("Gale");
   }else if(a>=48&&a<=63){
       printf("Storm");
   }else if(a>63){
       printf("Hurricane");
   }
    return 0;
}
