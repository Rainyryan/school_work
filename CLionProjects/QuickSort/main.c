#include <stdio.h>


void quickSort(int a[],int ,int);
int split(int a[], int,int);

int main() {
    int length,i;

    printf("Enter length\n");
    scanf("%d", &length);

    int a[length];

    printf("Enter %d elements\n", length);

    for(i = 0; i < length; i++)
        scanf("%d", &a[i]);
    quickSort(a, 0, length - 1);

    for(i = 0; i < length; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quickSort(int a[], int low, int high){
    int middle;

    if(low >= high) return;
    middle = split(a, low, high);

    quickSort(a, low, middle-1);
    quickSort(a, middle + 1, high);
}

int split(int a[], int low, int high){
    int e = a[low];

    for(;;){
        while (low < high && e <= a[high])
            high--;
        if (low >= high) break;
        a[low++] = a[high];
        while (low < high && e >= a[low])
            low++;
        if (low >= high) break;
        a[high--] = a[low];
    }
    a[high] = e;

    return high;
}