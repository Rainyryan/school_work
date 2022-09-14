#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
struct compareValue {bool operator()(vector<int>::iterator a, vector<int>::iterator b) {return *a > *b;}};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, n, a;
    cin>>N;
    vector<vector<int> > V;
    vector<int> v;
    V.reserve(N);
    for(int i = 0; i < N; ++i){
        cin>>n;
        v.reserve(n);
        while(n--){
            cin>>a;
            v.push_back(a);
        }
        v.push_back(INT32_MAX);
        V.push_back(v);
        v.clear();
    }
    int low = INT32_MAX, high = INT32_MIN;
    priority_queue<vector<int>::iterator, vector<vector<int>::iterator>, compareValue> pq;
    
    for(auto &i : V){
        low = min(low, i[0]);
        high = max(high, i[0]);
        pq.push(i.begin());
    }
    pair<int, int> ans = make_pair(low, high);
    while(1){
        auto p = pq.top();
        pq.pop();
        ++p;
        pq.push(p);
        if(*p == INT32_MAX) break;
        low = *pq.top();
        high = max(high, *p);
        if(high - low < ans.second - ans.first) ans = make_pair(low , high);
    }
    cout<<ans.first<<' '<<ans.second;
}

/*
3 
5 4 10 15 24 26 
4 0 9 12 20 
4 5 18 22 30

while(!V[0].empty()){
        cout<<V[0].front();
        V[0].pop();
    } 
*/
