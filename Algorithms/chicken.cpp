#include<iostream>
#include<vector>

using namespace std;

vector<bool> Vis;

int pick(vector<int>& V, int& N){
    if(!N) Vis[] = true;
    --N;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,a,n = 6;
    vector<int> V;
    cin>>N;
    while(N--){
        cin>>a;
        V.push_back(a);
    }
    pick(V, n);
}