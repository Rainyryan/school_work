#include <stdio.h>
#include <math.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    for(int n = x;n <= y;n++) {
        if(n==2||n==3){
            printf("%d ",n);
        }
        for (int i = 2;i < sqrt(n); i++) {
            if (n % i == 0) {
                break;
            }else if(i == floor(sqrt(n))){
                printf("%d ",n);
            }
        }
    }
    return 0;
}
