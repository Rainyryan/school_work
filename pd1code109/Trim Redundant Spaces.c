#include<stdio.h>

int main(){
    char fuck[1000];
    fgets(fuck,1000,stdin);
    for(int i = 0; fuck[i] != '\n';){
        if(fuck[i] == ' ' && fuck[i+1] == ' '){
            i++;
        }else{
         printf("%c",fuck[i]);
         i++;     
        }
    }
    return 0;
}