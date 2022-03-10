#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,a;
    vector<int> V;
    cin>>N;
    while(N--){
        cin>>a;
        V.push_back(a);
    }
    sort(V.begin(), V.end());
    for(int i : V) cout<<i<<' ';
}