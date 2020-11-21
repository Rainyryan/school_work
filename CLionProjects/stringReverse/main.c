#include<stdio.h>

int main(){
    int l;
    scanf("%d\n",&l);
    char s[l+1];
    fgets(s,l+1,stdin);

    for(int i = 0; i < l; i++){
        printf("%c", s[l-i-1]);
    }
    return 0;
}