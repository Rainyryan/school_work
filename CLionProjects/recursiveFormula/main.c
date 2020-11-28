#include<stdio.h>
int main(){
    long long int x[3],n;

    scan:
    	scanf("%lld%lld%lld", &x[0], &x[1], &n);

        if((x[0] != 0)&&(x[1] != 0)&&(x[2] != 0)){
            for(int i = 2; i < n; i++){
                x[2] = x[0] +x[1];
                x[0] = x[1];
                x[1] = x[2];
                //printf("%d ",x[i]);
            }
            printf("%lld\n", x[2]);
            goto scan;
        }

    return 0;
}
/*
28 8 11
22 22 6
27 15 5
0 0 0

*/