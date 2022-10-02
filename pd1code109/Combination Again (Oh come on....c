#include <stdio.h>

int C(int a, int b){
	if(b == 0 || b == a)
    	return 1;
    	return C(a - 1, b - 1) + C(a - 1, b);
}

int main(void){
    int n, m;
    
    scanf("%d%d", &n, &m);
    printf("%d", C(n, m));
    return 0;
}
