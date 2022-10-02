#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int minDist(int dist[], bool sptSet[], int N){
    int min = INT32_MAX, min_index;
    for(int v = 0; v < N; ++v)
        if(sptSet[v] == false && dist[v] <= min){
            min = dist[v];
            min_index = v;
        }
    return min_index;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, F, u, v, w;
    cin>>N>>M>>F;
    int adjMat[N+1][N+1];
    for(int i = 0; i < N+1; ++i)
        for(int j = 0; j < N+1; ++j)
            adjMat[i][j] = 0;

    for(int i = 0; i < M; ++i){
        cin>>u>>v>>w;
        adjMat[u-1][v-1] = w;
        adjMat[v-1][u-1] = w;
    }
    for(int i = 0; i < F; ++i){
        cin>>u;
        adjMat[N][u-1] = 1;
        adjMat[u-1][N] = 1;
    }

    int dist[N+1];
    bool sptSet[N+1];
    for(int i = 0; i < N+1 ; i++){
        dist[i] = INT32_MAX;
        sptSet[i] = false;
    }

    dist[N] = 0;
    for(int c = 0; c < N; ++c){
        int u = minDist(dist, sptSet, N+1);
        sptSet[u] = true;
        for(int v = 0; v < N+1; ++v)
            if(!sptSet[v] && adjMat[u][v] && dist[u] != INT32_MAX && dist[u] + adjMat[u][v] < dist[v])
            dist[v] = dist[u] + adjMat[u][v];
    }
    for(int i = 0; i < N; ++i)
        if(dist[i] >= INT32_MAX) cout<<"-1 ";
        else cout<<dist[i]-1<<' ';

}

/*
10 13 2
2 8 8 
1 4 4
4 3 4
3 7 7
6 1 15
7 1 2
4 5 8
8 7 9
7 5 3
10 1 12
5 10 13
4 9 4
3 6 10
9 2
*/