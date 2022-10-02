#include <stdio.h>

int main() {
    int ang,cul,row;
    scanf("%d%d%d",&ang,&cul,&row);
    int a[cul+1][row+1];

    for(int i = 0; i < cul; i++){
        for(int j = 0; j < row; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    switch(ang){
        case 90:
            for(int i = 0; i < row ; i++){
                for(int j = cul-1; j >= 0; j--) {
                    printf("%d ",a[j][i]);
                    if(j==0){
                        printf("\n");
                    }
                }
            }
            break;
        case 180:
            for(int i = cul-1; i >= 0 ; i--){
                for(int j = row-1; j >= 0; j--) {
                    printf("%d ",a[i][j]);
                    if(j==0){
                        printf("\n");
                    }
                }
            }
            break;
        case 270:
            for(int i = cul+2; i >= 0  ; i--){
                for(int j = 0; j < cul; j++) {
                    printf("%d ",a[j][i]);
                    if(j==cul-1){
                        printf("\n");
                    }
                }
            }

            break;

    }
    return 0;
}
