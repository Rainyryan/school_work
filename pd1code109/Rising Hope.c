#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rising_hope(char *R);

int main(int argc, char *argv[])
{
    char in[1005];

    scanf("%s", in);
    int hope = rising_hope(in);
    printf("%d\n", hope);

    return 0;
}
int rising_hope(char *R) {
    int hope = 0;
	while(*R != '\0'){
		if(*R == 'P') hope++;
        	if(*R == 'N') hope--;
        R++;
	}
    return hope;
}
