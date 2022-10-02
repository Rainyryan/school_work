#include<stdio.h>

long power(int a, int b);
int myAtoi(char * s);

int main(){
    char* s = "42";

    printf("%d",myAtoi(s));

    return 0;
}

long power(int a, int b){
    long result = 1;
    while(b-- > 0)
        result *= a;
    return result;
}

int myAtoi(char * s){
    
    long result = 0;
    int sign = 1;
    
    while(*s == ' ')
        s++;
    if(*s == '-')
        sign = -1;
        if(*s =='+')
            sign = 1;
    while(*s <= '9' && *s >= '0'){
        result = result*10 + *s;
        s++;
    }
    if(result > power(2, 31)-1)
        result = power(2, 31)-1;
        if(result < -power(2, 31))
            result = -power(2, 31);
    return sign*result;
}