#include<stdio.h>

int main(){
    int c[3];
    for(int i = 0; i < 3; i++){
    	scanf("%x",&c[i]);
    }
    printf("rgb(%d,%d,%d)",c[0],c[1],c[2]);
    return 0;
}