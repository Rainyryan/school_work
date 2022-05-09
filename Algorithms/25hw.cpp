#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int find_max_points(vector<vector<int>>& V, int n){
    int max_points[V[0][0]+1];
    memset(max_points, 0, sizeof(max_points));
    
    for(int i = 0; i < n; ++i){
        for(int j = V[0][0]; j >= V[i][1]; --j)
            max_points[j] = max(max_points[j], max_points[j - V[i][1]] + V[i][2]);
        // for(int j = 0; j <= V[0][0]; ++j)
            // cout<<max_points[j]<<' ';
        // cout<<'\n';
    }

    return max_points[V[0][0]];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    
   
    vector<vector<int>> V (n,vector<int>(3,0));
    for(auto v : V) v.clear();
    for(int i = 0; i < n; ++i) cin>>V[i][2]>>V[i][0]>>V[i][1];

    sort(V.begin(), V.end(), greater());

    cout<<find_max_points(V, n);
}

/*
3 
30 1000 500 
30 1000 600 
40 1500 1000

70

3
10 10 5
20 9 3
30 8 1

6 
20 2000 400 
10 1000 500 
10 3000 1000 
30 1300 400 
20 2000 700 
10 1000 100

90

*/