#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
vector<vector<int>> adj;
int Time(vector<vector<int>>& times, int N) {

    vector<int> dist(N, 1e9);
    dist[0] = 0;
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    pair<int,int> temp;

    while(!q.empty()){
        temp = q.front();
        q.pop();

        int u = temp.second;

        for(int i=0;i< times[u].size();i++){

            int weight =times[u][i];
            if(dist[i] > dist[u] + weight){
                dist[i] = dist[u] + weight;
                q.push(make_pair(dist[i], i));
            }
        }
    }
    int ans = 0;
    for(int i=0;i<dist.size();i++){
        ans = max(ans, dist[i]);
    }
    return  ans;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;
    cin >> count;
    adj.resize(count,vector<int>(count,0));
    vector<vector<pair<int,int>>> adj2(count);
    for (int i = 1; i < count; ++i) {
        for (int j = 0; j < i; ++j) {
            int n;
            cin>>n;
            adj[i][j]=n;
            adj[j][i]=n;
            adj2[i].push_back({j,n});
            adj2[j].push_back({i,n});
        }
    }

    cout<<Time(adj,count);
    return 0;
}