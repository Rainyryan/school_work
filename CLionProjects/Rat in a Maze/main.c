#include <stdio.h>
#include <stdbool.h>
#define n 10

bool visit(char(*)[n], int(*)[n], int, int);
int main(void) {
    char maze[n][n];
    int route[n][n];
    // initialize maze and route matrices
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            route[i][j]=0;
            scanf("%c", &maze[i][j]);
            getchar();
        }
    }
    if (visit(maze, route, 0, 0)) { // (0,0) is a starting point
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++)
                printf("%d ", route[i][j]);
            printf("\n");
        }
    } else {
        printf("Can't find the exit!");
    }
    return 0;
}
// Your code goes here

// TODO: fill the route matrix with 0's or 1‘s.
// If there isn't any route, return false; otherwise, return true.


bool isWithIn(char maze[][n], int x, int y){
    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 'r')
        return true;
        return false;
}

bool visit(char maze[][n], int route[][n], int x, int y)
{
    //check if starts at end point
    if (x == n - 1 && y == n - 1 && maze[x][y] == 'r' ) {
        route[x][y] = 1;
        return true;
    }
    //validation
    if(isWithIn(maze, x, y) && route[x][y] == 0) {
        route[x][y] = 1;
        //x+ direction
        if (visit(maze, route, x + 1, y)) {
            return true;
        }
        //y+ direction
        if (visit(maze, route, x, y + 1)) {
            return true;
        }
        //x- direction
        if(visit(maze, route, x - 1, y)){
            return true;
        }
        //y- direction
        if(visit(maze, route, x, y - 1)){
            return true;
        }
        //if x, y doesn't work then shit go back
        route[x][y] = 0;
        return false;
    }

    return false;
}


/*
r w r r r r w r r r
r w r w r r w r w r
r w r w r r r r w r
r w r w r r w r r r
r w r w r r w r r r
r w r w r r w r w r
r w r w r r r r w r
r w r w r r w r w r
r r r w r r w r w r
r w r w r r r r w r
*/