#include<stdio.h>

int main(){
    int i, arr1[32], arr2[32];
    for(i = 0; i < 32; i++)
        scanf("%d",&arr1[i]);
    for(i = 0; i < 32; i++)
        scanf("%d",&arr2[i]);

    for(i = 31; i >= 0; i--){
        arr1[i] += arr2[i];
        int k = i;
        while(arr1[k] >= 2){
            arr1[k] -= 2;
            arr1[k-1]+=1;
            k--;
        }
    }
    for(i = 0; i < 32; i++)
        printf("%d ",arr1[i]);
    return 0;
}