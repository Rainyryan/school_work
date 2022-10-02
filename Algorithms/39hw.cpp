#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

void solve(int N, int M){ 
    int d1, d2;
    vector<int>adj [501];
    int inDeg[501];
    for(int i = 1; i < N; ++i){
        adj[i].clear();
        inDeg[i] = 0;
    }

    for(int i = 0; i < M; ++i){
        cin>>d1>>d2;
        adj[d1].push_back(d2);
        inDeg[d2]++;
    }

    priority_queue<int, vector<int>, greater<int>> q;
    vector<int> res;
    for (int i = 1; i <= N; i++){
			if(!inDeg[i]) q.push(i);
	}
    while (!q.empty()){
			int u = q.top();
			q.pop();
			res.push_back(u);
			for (auto v : adj[u]){
				if (!--inDeg[v]) q.push(v);
			}
		}
		for (int i = 0; i < N; i++){
			cout << res[i] << ' ';
		}
        cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    while(cin>>N>>M) solve(N, M);
}