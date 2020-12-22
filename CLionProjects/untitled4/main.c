#include <stdio.h>

int main() {
    int i = 12345;
    int *p = &i;
    printf("%d\n",*p);
    printf("%d\n",&p);
    printf("%d\n",p);
    return 0;
}
