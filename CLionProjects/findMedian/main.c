#include<stdio.h>
void swap(int *x,int *y){
    int t;
    t=*y;
    *y=*x;
    *x=t;
}
void sort(int num[]){
    int i,j;
    for(i = 0;i < 2;i++) {
        for(j = 0;j < 2-i;j++) {
            if(num[j] > num[j+1])
                swap(&num[j],&num[j+1]);
        }
    }
}
int main() {
    int num[3];
    for(int i=0;i<3;i++){
        scanf("%d",&num[i]);
    }
    sort(num);
    printf("%d", num[1]);
    return 0;
}