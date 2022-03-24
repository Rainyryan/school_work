#include<iostream>
#include<set>
#include<list>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, K, a;
    cin>>N>>M>>K;

    multiset<int> MS, cache;
    list<multiset<int>::iterator> LS;
    for(int i = 0; i < M; ++i){
        cin>>a;
        // a<*MS.begin() ? LS.push_back(cache.insert(a)) : LS.push_back(MS.insert(a));
        LS.push_back(cache.insert(a));
        if(cache.size() >= K){
            MS.insert(*--cache.end());
            cache.erase(--cache.end());
        }
    }
    for(int i = 0; i < N-M+1; ++i){
        auto it = MS.begin();
        // advance(it, K-1);
        cout<<*it<<' ';
        if(i == N-M) break;
        *LS.front() < *it ? cache.erase(LS.front()) : MS.erase(LS.front());
        LS.pop_front();
        cin>>a;
        // a<*MS.begin() ? LS.push_back(cache.insert(a)) : LS.push_back(MS.insert(a));
        LS.push_back(cache.insert(a));
        if(cache.size() >= K){
            MS.insert(*--cache.end());
            cache.erase(MS.begin());
        }
        // LS.push_back(MS.insert(a));
    }
}