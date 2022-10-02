#include<stdio.h>
#include<math.h>

int main(){
    double R,x=1.0;
    int N, i = 0;
    scanf("%lf%d",&R,&N);
    //printf("%lf",R);
    x = pow(R,N);
    printf("%.f",x-1);
    return 0;
}