#include<iostream>
#include<vector>

using namespace std; 

 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a;
    cin>>n;
    vector<int> h0(n+1, 1289);
    vector<int> h1;
    h1.reserve(n+1);

    cout<<"h0cap"<<h0.capacity()<<" "<<h0.size()<<"\nh1cap"<<h1.capacity()<<" "<<h1.size()<<'\n';
    for(auto i : h0) cout<<i;
}