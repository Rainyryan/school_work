#include<iostream>
#include<vector>

using namespace std;

void combination(vector<int> &V, vector<int> &tmp, int start, int end, int index, int &r){
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

void combination2(vector<int> &V, int k){
  for(int i = 0; i < k; ++i) cout<<V[i]<<" ";
  cout<<'\n';


}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,a, R = 6;
  vector<int> V, tmp;
  cin>>N;
  V.reserve(N);
  tmp.reserve(N);
  while(N--){
    cin>>a;
    V.push_back(a);
  }
  combination(V, tmp, 0, V.size(), 0, R);
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