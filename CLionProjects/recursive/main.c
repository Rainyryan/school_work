#include <stdio.h>
int X(int a, int b, int n){
if(n == 3) return a + b;
    return X(b, a + b, n - 1);
}
int main(void){
    int x1, x2, n;
    for(;;) {
        scanf("%d%d%d", &x1, &x2, &n);
        if (n == 0)break;
        printf("%d\n", X(x1, x2, n));
    }
    return 0;
}