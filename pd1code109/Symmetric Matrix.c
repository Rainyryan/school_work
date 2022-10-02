#include<stdio.h>
#include <stdbool.h>

int main(){
    int r;
    bool sym = true;
    scanf("%d",&r);
    int mat[r][r];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < r; j++){
        	scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < i; j++){
        	if(mat[i][j] != mat[j][i]){
               sym = false; 
            }
        }
    }
    if(sym){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
