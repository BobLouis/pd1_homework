#include <stdio.h>
#include <math.h>
#define pi 3.14f
int main(){
    int year,age;
    float height,weight,bmi;
    scanf("%d%f%f",&year,&height,&weight);
    age=2020-year+1;
    printf("Age = %d\n",age);
    printf("Height = %gcm\n",height);
    printf("Weight = %gkg\n",weight);
    printf("BMI = %.1f\n",weight/((height/100)*height/100));
    bmi=weight/((height/100)*height/100);
    if(age<19||age>36){
        printf("Not a Draftee (age < 19 or age > 36 years old)\n");
        printf("No need to perform Military Service");
        return -1;
    }
    if(17<=bmi&&bmi<=31){
        printf("Physical Status of Regular Service Draftees\n");
        if(year<=1993){
            printf("1 year of Regular Service");
        }else if(year>1994){
            printf("4 months of Regular Service");
        }
    }else if((16.5<=bmi&&bmi<17)||(31<=bmi&&bmi<=bmi)){
        printf("Physical Status of Substitute Service Draftees\n");
        if(year<=1993){
            printf("Substitute Services");
        }else if(year>1994){
            printf("Replacement Service");
        }
    }else if(bmi<16.5 || bmi>31.5){
        printf("Physical Status of Military Service Exemption\n");
        printf("Exemption from Military Service");
    }

    return 0;
}
