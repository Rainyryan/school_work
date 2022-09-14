#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, a, max = 0, fir, sec;
    priority_queue<int> pq;
    cin>>N;
    if(N<2){
        cout<<0;
        return 0;
    }
    while(N--){
        cin>>a;
        pq.push(a);
    }
    fir = pq.top();
    pq.pop();
    while(!pq.empty()){
        sec = pq.top();
        pq.pop();
        if(fir - sec > max) max = fir - sec;
        fir = sec;
    }
    cout<<max;
}

/*
8 
3 6 9 1 33 35 67 79
*/