#include <bits/stdc++.h>

using namespace std;

vector<tuple<int,int,int>>edge;
vector<int>parent(1000);

int find(int i) {
    while (parent[i] != i) {
        i = parent[i];
    }
    return i;
}

void uni(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

void kurskal(int n){
    int ans=0;
    vector<int>visited;

    for (int i = 0; i < parent.size(); i++) parent[i] = i;

    int i=0;
    while (visited.size() != n-1) {
        int x,y,cost;
        cost = get<0>(edge[i]);
        x = get<1>(edge[i]);
        y = get<2>(edge[i]);
        int parentX = find(x);
        int parentY = find(y);
        if (parentX != parentY) {
            visited.push_back(cost);
            uni(x, y);
            ans += cost;
        }
        i++;
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>>points;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        points.push_back(pair<int,int>(x,y));
    }
    int distance;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)break;
            else{
                distance = abs(points[i].first - points[j].first) + abs(points[i].second - points[j].second);
                edge.push_back(tuple<int,int,int>(distance, i, j));
            }
        }
    }
    sort(edge.begin(), edge.end());
    kurskal(n);
    return 0;
}