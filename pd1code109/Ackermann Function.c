#include <stdio.h>
int A (int x, int y){
	if(x == 0) return y + 1;
    if(y == 0) return A(x - 1, 1);
    return A(x - 1, A(x, y -  1));  
}
int main(void){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", A(n, m));
    return 0;
}
