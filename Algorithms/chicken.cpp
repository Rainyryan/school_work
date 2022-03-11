#include<iostream>
#include<vector>

using namespace std;


void combination(vector<int> &V, vector<int> &tmp, int start, int end, int index, int r)
{
    if(index == r){
        for(int j = 0; j < index; ++j) cout<<tmp[j]<<" ";
        cout<<'\n';
        return;
    }
    for(int i = start; i < end && end - i >= r - index; ++i){
        tmp[index] = V[i];
        combination(V, tmp, i+1, end, index+1, r);
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,a;
  vector<int> V, d;
  cin>>N;
  while(N--){
    cin>>a;
    V.push_back(a);
  }
  vector<int> tmp;
  tmp.reserve(V.size());
  combination(V, tmp, 0, V.size(), 0, 6);
}

/*
1 2 3 4 5
0 1 2 3 4
  s=0
  n=3
  l=3
  s=1
  n=2
  l=3
  s=2
  n=3
  l=5
*/