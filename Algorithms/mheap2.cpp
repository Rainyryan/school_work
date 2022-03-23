#include<iostream>
#include<algorithm>

using namespace std;

bool greater1(const int& a,const int& b){
  return a >= b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int heap[n];
    for(int i = 0; i < n; ++i) cin>>heap[i];
    std::make_heap(heap, heap+n, greater1);
    for(auto i : heap) cout<<i<<' ';
}