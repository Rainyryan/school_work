#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a;
    cin>>n;
    vector<int> heap;
    heap.reserve(n+1);
    while(n--){
        cin>>a;
        heap.push_back(a);
    }
    std::make_heap(heap.begin(), heap.end(), greater_equal());
    for(auto i : heap) cout<<i<<' ';
}

/*
6 
40 60 10 20 50 30

struct greater1{
  bool operator()(const long& a,const long& b) const{
    return a >= b;
  }
};

*/