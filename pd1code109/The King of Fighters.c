#include<stdio.h>

int main(){
    int a,b,d;
    scanf("%d %d",&a,&b);
    while(a>0&&b>0){
    	scanf("%d",&d);
        b-=d;
        if(b<=0){printf("A");}
        scanf("%d",&d);
        a-=d;
        if(a<=0){printf("B");}
    }    
    return 0;
}
