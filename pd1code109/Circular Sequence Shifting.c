#include<stdio.h>

int main(){
    int n,x,a;
    scanf("%d %d %d",&n,&x,&a);
    a += x;
    while (a > n-1){
        a -= n;
        }
    printf("%d",a);
    return 0;
}
