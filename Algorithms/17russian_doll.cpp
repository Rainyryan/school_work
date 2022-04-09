#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,a;
    cin>>N;
    priority_queue<int, vector<int>, greater<int> > PQ, tmp;
    for(int i = 0; i < N ; ++i){
        cin>>a;
        PQ.push(a);
    }
    
    while(!PQ.empty() || !tmp.empty()){
        a = PQ.top();
        PQ.pop();
        cout<<a<<' ';
        while(!PQ.empty()){
            if(a == PQ.top()) tmp.push(a);
            else cout<<PQ.top()<<' ';
            a = PQ.top();
            PQ.pop();
        }
        cout<<'\n';
        if(PQ.empty() && tmp.empty()) break;
        a = tmp.top();
        tmp.pop();
        cout<<a<<' ';
        while(!tmp.empty()){
            if(a == tmp.top()) PQ.push(a);
            else cout<<tmp.top()<<' ';
            a = tmp.top();
            tmp.pop();
        }
        cout<<'\n';
    }
}


/*
10 
5 1 4 2 3 5 7 8 9 4
6 
1 1 2 2 2 3 
*/