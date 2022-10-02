#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;

vector<tuple<int,int,int>>edge;
vector<int>parent(2000);

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

    for (int i = 0; i < parent.size(); i++) {
        parent[i] = i;
    }

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
    cout<<"The highest possible quality is 1/"<<ans<<".";
}

int main() {
    int n;
    cin>>n;
    string cars[n];
    for(int i=0;i<n;i++){
        cin>>cars[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int weight=0;
            for(int k=0;k<7;k++) {
                if (cars[i][k] != cars[j][k]) {
                    weight++;
                }
            }
            edge.push_back(tuple<int,int,int>(weight, i, j));
        }
    }
    sort(edge.begin(), edge.end());
    kurskal(n);
    return 0;
}