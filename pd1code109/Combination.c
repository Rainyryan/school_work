#include<stdio.h>

int C(int m, int n){
    if(n>=m/2){
        n=m-n;
    }
    long num=1, denom=1,j=n;
    int ret=1;
    for(int i=m;i>m-n;i--){
        num *= i;
        denom *= j;
        j--;
        if(num%denom==0){
            ret *= num/denom;
            num=1;
            denom=1;
        }
    }
    return(ret);
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int a=C(m,n);
    printf("%d",a);

    return 0;
}