#include<iostream>
#include<set>
#include<list>
#include<map>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, K, a;
    cin>>N>>M>>K;

    vector<int> V;
    list<multiset<int>::iterator> LS;
    for(int i = 0; i < M; ++i){
        cin>>a;
        
    }
    for(int i = 0; i < N-M+1; ++i){
        auto it = MS.begin();
        advance(it, K-1);
        cout<<*it<<' ';
        if(i == N-M) break;
        MS.erase(LS.front());
        LS.pop_front();
        cin>>a;
        LS.push_back(MS.insert(a));
    }
}

/*
16 5 2 
2 4 3 5 8 1 2 1 2 4 3 5 8 1 2 1

*/