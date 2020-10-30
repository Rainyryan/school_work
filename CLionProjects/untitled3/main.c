#include <stdio.h>


int main() {
    int year,thousands,hundreds,tens,ones;
    char roman[4][10] = {{0,"I","II","III","IV","v","VI","VII","VIII","IX"},
                         {0,"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                         {0,"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                         {0,"M","MM","MMM",0,0,0,0,0,0}},output[5];

    scanf("%d",&year);
    thousands = year/1000;
    hundreds = year/100-10*(year/1000);
    tens = year/10-10*(year/100);
    ones = year-10*(year/10);
    //printf("%d,%d,%d,%d",thousands,hundreds,tens,ones);
    switch (thousands) {
        case 3: output[0] = roman[3][3];break;
        case 2: output[0] = roman[3][2];break;
        case 1: output[0] = roman[3][1];break;
    }
    switch (hundreds) {
        case 9: output[1] = roman[2][9];break;
        case 8: output[1] = roman[2][8];break;
        case 7: output[1] = roman[2][7];break;
        case 6: output[1] = roman[2][6];break;
        case 5: output[1] = roman[2][5];break;
        case 4: output[1] = roman[2][4];break;
        case 3: output[1] = roman[2][3];break;
        case 2: output[1] = roman[2][2];break;
        case 1: output[1] = roman[2][1];break;
        default:break;
    }
    switch (tens) {
        case 9: output[2] = roman[1][9];break;
        case 8: output[2] = roman[1][8];break;
        case 7: output[2] = roman[1][7];break;
        case 6: output[2] = roman[1][6];break;
        case 5: output[2] = roman[1][5];break;
        case 4: output[2] = roman[1][4];break;
        case 3: output[2] = roman[1][3];break;
        case 2: output[2] = roman[1][2];break;
        case 1: output[2] = roman[1][1];break;
        default:break;
    }
    switch (ones) {
        case 9: output[3] = roman[0][9];break;
        case 8: output[3] = roman[0][8];break;
        case 7: output[3] = roman[0][7];break;
        case 6: output[3] = roman[0][6];break;
        case 5: output[3] = roman[0][5];break;
        case 4: output[3] = roman[0][4];break;
        case 3: output[3] = roman[0][3];break;
        case 2: output[3] = roman[0][2];break;
        case 1: output[3] = roman[0][1];break;
        default:break;
    }
for(int i= 0;i<4;i++){
    printf("%c",output[i]);
}

}
