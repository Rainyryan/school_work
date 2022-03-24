#include<iostream>
#include<set>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, K, a;
    cin>>N>>M>>K;

    multiset<int> MS;
    queue<multiset<int>::iterator> LS;
    for(int i = 0; i < M; ++i){
        cin>>a;
        LS.push(MS.insert(a));
    }
    auto it = MS.begin();
    advance(it, K-1);
    cout<<*it<<' ';
    for(int i = 0; i < N-M; ++i){
        cin>>a;
        LS.push(MS.insert(a));
        if(a < *it) --it;
        if(*LS.front() <= *it) ++it;
        MS.erase(LS.front());
        LS.pop();
        cout<<*it<<' ';
    }
}

/*
16 5 3 
2 4 3 5 8 1 2 1 2 4 3 5 8 1 2 1

8 3 2 
2 4 3 5 8 1 2 1

10 3 2
5 5 5 4 3 2 8 9 1 0

*/