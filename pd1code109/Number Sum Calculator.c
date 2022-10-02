#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int addition(char str[]);

int main() {
    char str[N];
    scanf("%s", str);
    int sum = addition(str);
    printf("%d", sum);
    return 0;
}int addition(char str[]){
    int sum=0;
    char* token;
    char A[2] = "+";
    token = strtok(str,A);
    while(token != NULL){
    	sum+=atoi(token);
        token = strtok(NULL,A);
    }
    return sum;
}