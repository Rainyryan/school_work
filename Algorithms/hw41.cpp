#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    vector<vector<int>> E;
    vector<vector<int>> V; 
    for(int i = 0; i < N; ++i){
        vector<int> v(2,0), v1(N, 0);
        E.push_back(v1);
        cin>>v[0]>>v[1];
        V.push_back(v);
    }
    sort(V.begin(), V.end());

}

/*
5 
0 0 
2 2 
3 10 
5 2 
7 0
*/