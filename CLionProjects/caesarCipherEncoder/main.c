#include <stdio.h>

int main(){
    int k;
    char s[100]={0};
    scanf("%d\n",&k);
    scanf("%[^\n]%*c",s);
    //fgets(s,100,stdin);
    k=k%26;
    for(int i=0;i<=100;i++){
        if((s[i]<=90&&s[i]>=65)){
            s[i]+=k;
            if(s[i]>90){s[i]-=26;}
            if(s[i]<65){s[i]+=26;}
        }
        if((s[i]<=122&&s[i]>=97)){
            s[i]+=k;
            if(s[i]>122){s[i]-=26;}
            if(s[i]<97){s[i]+=26;}
        }
        printf("%c",s[i]);
    }
    return 0;
}
