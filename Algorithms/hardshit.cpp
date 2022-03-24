#include<iostream>
#include<set>
#include<list>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, K, a;
    cin>>N>>M>>K;

    multiset<int> MS;
    list<multiset<int>::iterator> LS;
    for(int i = 0; i < M; ++i){
        cin>>a;
        LS.push_back(MS.insert(a));
    }
    auto it = MS.begin();
    advance(it, K-1);
    for(int i = 0; i < N-M+1; ++i){
        cout<<*it<<' ';
        if(i == N-M) break;
        cin>>a;
        LS.push_back(MS.insert(a));
        if(a < *it) --it;
        if(*LS.front() <= *it) ++it;
        MS.erase(LS.front());
        LS.pop_front();
    }
}

/*
16 5 3 
2 4 3 5 8 1 2 1 2 4 3 5 8 1 2 1

8 3 2 
2 4 3 5 8 1 2 1

10 3 2
5 5 5 5 5 5 5 5 5 5

*/