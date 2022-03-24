#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool comp(pair<int, string>& a, pair<int, string>& b){
    return a.first == b.first ? a.second < b.second : a.first > b.first;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin>>N>>K;
    string s;
    unordered_map<string, int> M;
    vector<pair<int, string> > V;
    V.reserve(N+5);
    M.reserve(N+5);
    for(int i = 0; i < N; ++i){
        cin>>s;
        if(!M.count(s)){
            V.push_back(make_pair(1, s));
            M[s] = V.size()-1;
        }else
            get<0>(V[M[s]])++;
    }
    sort(V.begin(), V.end(), comp);
    // for(auto i : V) cout<<i.second<<','<<i.first<<'|';
    cout<<V[K-1].second<<'\n';
}

/*
19 2 
Margarita 
OldFashion 
Margarita 
Margarita 
OldFashion 
Mojito 
OldFashion 
Mojito 
Margarita 
Margarita
Margarita 
Margarita
Margarita 
Margarita
Mojito 
Mojito 
Mojito 
Mojito 
Mojito 

10 3
J I H G F E D C B A


10 2
Margarita 
OldFashion 
Margarita 
Margarita 
OldFashion 
Mojito 
OldFashion 
Mojito 
Margarita 
Margarita
*/