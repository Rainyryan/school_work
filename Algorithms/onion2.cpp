#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>

using namespace std;

vector<tuple<int, int, int> > V;
int R[300000];

void merge(vector<tuple<int, int, int> >&V, int s, int m , int e){
	vector<tuple<int, int, int> > tmp;
	int i = s, j = m;
	while(i<m && j<e){
		if(get<1>(V[i]) <= get<1>(V[j]))
			tmp.push_back(V[i++]);
		else{
			R[get<2>(V[j])] += i;
			tmp.push_back(V[j++]);
		}
	}
	while(i<m) tmp.push_back(V[i++]);
	while(j<e){
        R[get<2>(V[j])] += i;
        tmp.push_back(V[j++]);
    }
	for(int i = s; i < e; ++i)
		V[i] = tmp[i-s];
}

void merge_sort(vector<tuple<int, int, int> >&V, int s, int e){
	if(e-s > 1){
		int m = (s+e)/2;
		merge_sort(V, s, m);
		merge_sort(V, m, e);
		merge(V, s, m, e);
	}	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, x, y;
    cin>>N;
    V.reserve(N);
    //R.reserve(N);
    int i = 0;
    while(i++ < N){
        cin>>x>>y;
        V.push_back(make_tuple(x, y, i));
    }
    sort(V.begin(),V.end());
    // for(auto i : V) cout<<i.first<<','<<i.second<<'|';
    merge_sort(V, 0, V.size());
    for(int i = 0; i < V.size(); ++i) cout<<R[i]<<' ';
}

/*
7 
3 1 
4 1 
5 9 
2 6 
5 3 
5 8 
9 7
*/