#include <stdio.h>
#define M 5
#define N 8
char colors[4] = {'R', 'G', 'B', 'X'};   // Red, Green, Blue, Empty

void spread(char*, int, int);

int main(void) {
    char graph[M][N];
    int row, col;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            scanf("%c", &graph[i][j]);
        getchar();      // Ignore '\n'
    }
    scanf("%d %d", &row, &col);    // Starting position

    spread(&graph[0][0], row, col);

    // Print out the spreading result
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            printf("%c", graph[i][j]);
        printf("\n");
    }
    return 0;
}

void spread(char* graph, int row, int col) {
    int x = 1;
    a:
    if(*(graph+(row-x)*N+col) == *(graph+row*N+col)||*(graph+(row-x)*N+col) == 'X'){
        if(row-x<0){x = 1; goto b;}
        *(graph+(row-x)*N+col) = *(graph+row*N+col);
        x++;
        goto a;
    }
    x = 1;
    b:
    if(*(graph+(row+x)*N+col) == *(graph+row*N+col)||*(graph+(row+x)*N+col) == 'X'){
        if(row+x>M-1){x = 1; goto c;}
        *(graph+(row+x)*N+col) = *(graph+row*N+col);
        x++;
        goto b;
    }
    x = 1;
    c:
    if(*(graph+row*N+col-x) == *(graph+row*N+col)||*(graph+row*N+col-x) == 'X'){
        if(col-x<0){x = 1; goto d;}
        *(graph+row*N+col-x) = *(graph+row*N+col);
        x++;
        goto c;
    }
    x = 1;
    d:
    if(*(graph+row*N+col+x) == *(graph+row*N+col)||*(graph+row*N+col+x) == 'X'){
        if(col+x>N-1){x = 1; goto e;}
        *(graph+row*N+col+x) = *(graph+row*N+col);
        x++;
        goto d;
    }
    e:
    return;

}

//*(graph+row*N+col)