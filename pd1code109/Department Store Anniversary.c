#include<stdio.h>

int main(){
    int m, n;
    scanf("%d%d",&m,&n);
    int a[m+n];
    int i = 0;
    while(i < m+n){
        scanf("%d",&a[i]);
        i++;
    }
    /*scanf("\n");
    i = m;
    while(i < m+n){
        scanf("%d",a[i]);
        i++;
    }*/
    int x = 10001,p;
    i = 0;
    for(int j = 0; j < m+n;j++) {
        while (i < m+n) {
            if (a[i] < x) {
               x = a[i];
               p = i;
            }
            i++;
        }
        printf("%d ",x);
        a[p] = 10001;
        x = 10001;
        i =0;
    }
    return 0;
}