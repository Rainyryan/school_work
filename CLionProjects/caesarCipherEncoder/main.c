#include <stdio.h>

int main(){
    int k;
    char s[200]={0};
    scanf("%d\n",&k);
    //scanf("%[^\n]%*c",s);
    fgets(s,100,stdin);
    k=k%26;
    //printf("%d\n",k);
    for( int i = 0; s[i] != '\n' ; i++){
        if((s[i]<='Z'&&s[i]>='A')){
            s[i]+=k;
            if(s[i]>'Z'){s[i]-=26;}
            if(s[i]<'A'){s[i]+=26;}
        }
        if((s[i]<='z'&&s[i]>='a')){
            s[i]+=k;
            if(s[i]>'z'){s[i]-=26;}
            if(s[i]<'a'){s[i]+=26;}
        }
        printf("%c",s[i]);
    }
    return 0;
}