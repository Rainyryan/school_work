#include <stdio.h>
#include <math.h>


int main() {
    int bornYear,age;
    float height,weight;
    double BMI;
    scanf("%d %f %f",&bornYear,&height,&weight);
    age= 2020 - bornYear + 1;
    BMI=weight/pow(0.01*height,2);
    BMI = round(BMI*10)*0.1;
    printf("Age = %d\n"
           "Height = %.0fcm\n"
           "Weight = %.0fkg\n"
           "BMI = %.1f\n",age,height,weight,BMI);
    if(age<19||age>36) {
        printf("Not a Draftee (age < 19 or age > 36 years old)\n");
        printf("No need to perform Military Service");
    }else{
        if (17 <= BMI && BMI <= 31) {
            if (bornYear >= 1994) {
            printf("Physical Status of Regular Service Draftees\n");
                printf("4 months of Regular Service");
            } else {
                printf("1 year of Regular Service");
            }
        } else if ((16.5 <= BMI && BMI < 17 )|| (31 < BMI && BMI <= 31.5)) {
            printf("Physical Status of Substitute Service Draftees\n");
            if (bornYear >= 1994) {
                printf("Replacement Service");
            } else {
                printf("Substitute Services");
            }
        } else if (BMI < 16.5 || 31.5 < BMI) {
            printf("Physical Status of Military Service Exemption\n");
            printf("Exemption from Military Service");
        }
    }
    return 0;
}
