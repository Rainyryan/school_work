#include<iostream>
#include<set>
#include<list>

using namespace std;

struct comp {bool operator()(list<int>::iterator a, list<int>::iterator b) {return *a < *b;}};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, K, a;
    cin>>N>>M>>K;

    multiset<list<int>::iterator, comp> MS;
    list<int,> LS;
    for(int i = 0; i < M; ++i){
        cin>>a;
        LS.push_back(a);
        MS.insert(--LS.end());
    }
    for(int i = 0; i < N-M+1; ++i){
        auto it = MS.begin();
        advance(it, K-1);
        cout<<**it<<' ';
        if(i == N-M) break;
        MS.erase(MS.find(LS.begin()));
        LS.pop_front();
        cin>>a;
        LS.push_back(a);
        MS.insert(--LS.end());
    }
}

/*
16 3 2 
2 4 3 5 8 1 2 1 2 4 3 5 8 1 2 1

*/