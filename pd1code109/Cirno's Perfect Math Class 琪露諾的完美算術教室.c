#include<stdio.h>

int main(){
    int a,b,c,d,x,y,z;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x = a;
    y = x-b+c;
    z = y-d;
    printf("%.4d %.4d %.4d",x,y,z);
    return 0;
}
