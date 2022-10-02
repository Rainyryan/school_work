#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printMiddle(int n){
    int k=2*n-1;
    while(k-->0) printf("%d ",n);
}
void printAll(int n,int c){
    int k=c;
    while(k-->n) printf("%d ",k+1); // print front
    printMiddle(n);
    while(n++<c) printf("%d ",n); // print end
    printf("\n");
}


int main()
{

    int n;
    scanf("%d", &n);
      // Complete the code to print the pattern.
    int c=n;
    while(c-->1) printAll(c+1, n);
    while(c++<n) printAll(c,n);
    return 0;
}
