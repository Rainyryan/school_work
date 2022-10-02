#include <stdio.h>

int main(){
    int k,ch;
    char s[1000]={0};
    scanf("%d\n",&k);
    //scanf("%[^\n]%*c",s);
    fgets(s,1000,stdin);
    k=k%26;
    //printf("%d\n",k);
    for( int i = 0; s[i] != '\n'; i++){
        ch = s[i];
        if(ch<='Z'&&ch>='A'){
            ch+=k;
            if(ch>'Z'){ch-=26;}
            if(ch<'A'){ch+=26;}
        }
        if(ch<='z'&&ch>='a'){
            ch+=k;
            if(ch>'z'){ch-=26;}
            if(ch<'a'){ch+=26;}
        }
        printf("%c",ch);
    }
    return 0;
}