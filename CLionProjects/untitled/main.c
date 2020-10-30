#include <stdio.h>

int main() {
    int sum=0,x,count=1;
    while ( count <= 12){
        scanf("%1d",&x);
        if (count%2 == 1){
            sum += x;
        }else{
            sum += 3*x;
        }
        count++;
    }

    printf("%d\n",(10-sum%10)%10);


    return 0;
}
