#include<stdio.h>

int main(){
    int k;
    char key[k];
    scanf("%d",&k);
    //fgets(key,k,stdin);
    for(int i = 0; i < k; i++){
        scanf("%1c", &key[i]);
    }
    printf("%d%s",k,key);
    return 0;
}