#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char *input = malloc(1024*sizeof(char));
    int i=0, nums[10]={0};
    scanf("%[^\n]",input);
    while(*input!='\n') switch(*input++){
        case '0': *nums+=1;break;
        case '1': *(nums+1)+=1;break;
        case '2': *(nums+2)+=1;break;
        case '3': *(nums+3)+=1;break;
        case '4': *(nums+4)+=1;break;
        case '5': *(nums+5)+=1;break;
        case '6': *(nums+6)+=1;break;
        case '7': *(nums+7)+=1;break;
        case '8': *(nums+8)+=1;break;
        case '9': *(nums+9)+=1;break;
        default: break;
    };
    while(i<10) printf("%d ",*(nums+i++)/2);
    return 0;
}