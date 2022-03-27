#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, x, y;
    cin>>N;
    vector<multimap<int, int>::iterator> V;
    multimap<int, int> M;
    V.reserve(N);
    while(N--){
        cin>>x>>y;
        V.push_back(M.insert(pair<int, int>(x, y)));
    }
    for(auto Vit = V.begin(); Vit < V.end(); ++Vit){
        int rank = 0;
        for(auto Mit = M.begin(); Mit != M.upper_bound((*Vit)->first); ++Mit){
            if(Mit->second <= (*Vit)->second) ++rank;
        }
        cout<<rank-1<<' ';
    }
}

//cout<<"-----"<<Mit->first<<','<<Mit->second<<"-----";