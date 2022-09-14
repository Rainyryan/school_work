#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,a;
    cin>>N;
    multiset<int> S;
    vector<multiset<int>::iterator> V;
    for(int i = 0; i < N ; ++i){
        cin>>a;
        S.insert(a);
    }
    while(!S.empty()){
        a = *S.begin();
        cout<<a<<' ';
        S.erase(S.begin());
        for(auto it = S.begin(); it != S.end(); ++it){
            if(*it == a) continue;
            cout<<*it<<' ';
            a = *it;
            V.push_back(it);
        }
        cout<<'\n';
        for(auto it : V) S.erase(it);
        V.clear();
    }
}


/*
10 
5 1 4 2 3 5 7 8 9 4 
6 
1 1 2 2 2 3 
*/