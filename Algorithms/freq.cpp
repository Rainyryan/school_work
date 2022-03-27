#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct compareValue{
    bool operator()(pair<int*, char> a, pair<int*, char> b) {
    if(*a.first == *b.first) return a.second >= b.second;
    return *a.first < *b.first;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    priority_queue<pair<int*, char>, vector<pair<int*, char> >, compareValue> pq;
    vector<int> freq(75, 0);
    cin>>str;
    for(string::iterator it = str.begin(); it != str.end(); ++it) freq[*it - '0']++;
    for(int i = 0; i < freq.size(); ++i) pq.push(make_pair(&freq[i], i + '0'));
    while(!pq.empty()){
        int f = *pq.top().first;
        while(f--) cout<<pq.top().second;
        pq.pop();
    }
}


/*
y
*/