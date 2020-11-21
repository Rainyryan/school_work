#include<stdio.h>

int main(){
    int hex[3];
    scanf("#");
    printf("rgb(");
    for(int i = 0; i < 3; i++){
        scanf("%2x", &hex[i]);
        printf("%d",hex[i]);
        if(i < 2)
            printf(",");
    }
    printf(")");
    return 0;
}