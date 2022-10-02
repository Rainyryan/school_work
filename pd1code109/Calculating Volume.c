#include<stdio.h>
#include<math.h>

int main(){
    int mode;
    double len, wid, hei, rad, vol;
    scanf("%d\n",&mode);
    switch (mode){
        case 1:
            scanf("%lf",&len);
            vol = pow(len,3);
            break;
        case 2:
            scanf("%lf %lf %lf",&len,&wid,&hei);
            vol = len * wid * hei;
            break;
        case 3:
            scanf("%lf %lf",&rad,&hei);
            vol = 3.14f * pow(rad, 2) * hei;
            break;
        case 4:
            scanf("%lf",&len);
            vol = sqrt(2)/12 * len * len * len;
            break;
    }
    printf("%.2lf",vol);
    return 0;
}