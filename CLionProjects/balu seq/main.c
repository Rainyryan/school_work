#include<stdio.h>

int main(){
    long long int b[3]={1,1,0},n;
    scanf("%lld",&n);
    for(int i = 2; i < n;i++){
        b[2] = (2 * b[1] + 3 * b[0])%1000000007;
        b[0] = b[1];
        b[1]  = b[2];
    }
    printf("%lld",b[2]);
    return 0;
}