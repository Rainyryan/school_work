#include <iostream>
#include <vector>
#include <algorithm>

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
    
    int N, M, u, v, w;
    cin>>N>>M;
    int adjMat[N][N];
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            adjMat[i][j] = 0;

    for(int i = 0; i < M; ++i){
        cin>>u>>v>>w;
        adjMat[u-1][v-1] = w;
    }

    int dist[N];
    bool sptSet[N];
    for(int i = 0; i < N ; i++){
        dist[i] = INT32_MAX;
        sptSet[i] = false;
    }

    dist[0] = 0;
    for(int c = 0; c < N-1; ++c){
        int u = minDist(dist, sptSet, N);
        sptSet[u] = true;
        for(int v = 0; v < N; ++v)
            if(!sptSet[v] && adjMat[u][v] && dist[u] != INT32_MAX && dist[u] + adjMat[u][v] < dist[v])
            dist[v] = dist[u] + adjMat[u][v];
    }
    sort(dist, dist + N);
    cout<<dist[N-1]<<'\n';
}
