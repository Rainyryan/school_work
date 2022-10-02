#include<stdio.h>

int main(){
    char in[20];
    scanf("%s",in);
    for(int i = 0; i < 20;i++){
    	switch (in[i]){
        	case 'A':
                in[i] = 'C';
                break;
            case 'B':
                in[i] = 'R';
                break;
            case 'C':
                in[i] = 'W';
                break;
            case 'D':
                in[i] = 'Z';
                break;
            case 'E':
                in[i] = 'G';
                break;     
        }
    }
    printf("%s",in);
    return 0;
}
