#include <stdio.h>

char GPA(int score);

int main() {
    int i=0,k,score,grade=0,credit=0,totalWeightedGrade=0,totalCredit=0;
    int grades[100],credits[100];
    char gpa;

    printf("please enter with the syntax \"Grade Credit\"\nenter 0 -1 when finished\n");

    while(credit != -1) {
        scanf("%d %d",&grade,&credit);
        if(credit == -1){
            break;
        }
        if(grade>100 ^ grade < 0){
            printf("reEnter\n");
        }else {
            grades[i]= grade;
            credits[i]= credit;
            totalCredit += credit;
            totalWeightedGrade += grade * credit;
            i++;
        }
    }
    score = totalWeightedGrade / totalCredit;
    gpa = GPA(score);
    for(k=0;k<i;k++){
        printf("%d. %d %d\n",k+1,grades[k],credits[k]);
    }

    printf("Weighted average score : %c\n",gpa);

    return 0;
}
char GPA(int score){
    int n = score/10;
    char ret;
    switch(n){
        case 10:
            ret = 65;
            break;
        case 9:
            ret = 65;
            break;
        case 8:
            ret = 66;
            break;
        case 7:
            ret = 67;
            break;
        case 6:
            ret = 68;
            break;
        default:
            ret = 70;
    }
    return ret;
}