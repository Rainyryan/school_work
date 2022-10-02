#include<stdio.h>

int main(){
    int h,m;
    scanf("%d %d",&h,&m);
    m += 50;
    if(m >= 60){
        h += 1;
        m -= 60;
    }
    if(h >= 24){
        h -= 24;
    }
    printf("%.2d:%.2d\n",h,m);
    return 0;
}
