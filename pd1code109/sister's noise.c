#include<stdio.h>
#include <stdlib.h>

int main(){
    int i, j, M = 0 , r[10], s[10][10];
    for(i = 0; i < 10; i++){
    	scanf("%d",&r[i]);
    }
    for(i = 0; i < 10; i++){
    	for(j = 0; j < 10; j++){
            s[i][j] = (r[i]+r[j])*abs(i-j);
            if(s[i][j]>M)
                M = s[i][j];
        }
    }
    printf("%d",M);
    return 0;
}
