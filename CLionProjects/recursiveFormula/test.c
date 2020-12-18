//
// Created by MSI on 12/8/2020.
//
#include <stdio.h>
int X(int a, int b, int n){
    if(n == 0) return 0;
    return X(b, a + b, n - 1);
}
int main(void){
    int x1, x2, n;
    scanf("%d%d%d", &x1, &x2, &n);
    printf("%d", X(x1, x2, n));
    return 0;
}
