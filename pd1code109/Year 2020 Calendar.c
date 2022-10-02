#include<stdio.h>

int main(){
    //  3 1 3 2 3 2 3 3 2 3 2
    // 1 2 3 4 5 6 7 8 9101112
    int n,shift[12]={3,6,0,3,5,1,3,6,2,4,0,2};
    scanf("%d",&n);
    printf("Sun Mon Tue Wed Thu Fri Sat \n");
    for(int j=1;j<=shift[n-1];j++){
        printf("    ");
    }
    int date;
    if(n==2){date=29;
    }else if(n==4||n==6||n==9||n==11){date=30;
    }else{date=31;
    }
    for(int i=1;i<=date;i++){
        printf("%3d ",i);
        if((i+shift[n-1])%7==0&&i!=date){
            printf("\n");
        }
    }
    return 0;
}