#include<iostream>
#include<vector>

using namespace std;
long IN=0;
vector<int>V;

void merge(vector<int>&V, int s, int m , int e){
	vector<int> tmp;
	int i = s, j = m;
	while(i<m && j<e){
		if(V[i]<=V[j])
			tmp.push_back(V[i++]);
		else{
			IN += m-i;
			tmp.push_back(V[j++]);
		}
	}
	while(i<m) tmp.push_back(V[i++]);
	while(j<e) tmp.push_back(V[j++]);
	for(int i = s; i < e; ++i)
		V[i] = tmp[i-s];
}

void merge_sort(vector<int>&V, int s, int e){
	if(e-s > 1){
		int m = (s+e)/2;
		merge_sort(V, s, m);
		merge_sort(V, m, e);
		merge(V, s, m, e);
	}	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,a;
    cin>>N;
    V.reserve(N);
    while(N--) {
        cin>>a;
        V.push_back(a);
    }
	merge_sort(V, 0, V.size());
	IN %= 524287;
	cout<<IN<<'\n';
}