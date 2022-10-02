#include <stdio.h>
int factorial(int a);


int main() {
    int m,n,s=0;
    scanf("%d",&m);
    n=m;
    while(n>0){
        int digit = n % 10;
        s += factorial(digit);
        n /=10;
    }
    if(s == m){
        printf( "%d is a strong number.",m);
    }else{
        printf("%d is not a strong number.",m);
    }
    return 0;
}
int factorial(int a){
    int sum=1;
    for(int i=1; i<=a;i++){
        sum *= i;
    }
    return sum;
}
