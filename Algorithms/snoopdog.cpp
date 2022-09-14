#include<iostream>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;
bool compareValue(list<int>::iterator &a, list<int>::iterator &b){return *a < *b;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, n, a;
    cin>>N;
    vector<list<int> > V;
    list<int> l;

    V.reserve(N);
    for(int i = 0; i < N; ++i){
        cin>>n;;
        while(n--){
            cin>>a;
            l.push_back(a);
        }
        l.push_back(99999);
        V.push_back(l);
        l.clear();
    }

    vector<list<int>::iterator> R;
    R.reserve(N);
    for(int i = 0; i < N; ++i) R.push_back(V[i].begin());
    int s = -99999, e = 99999, k =10;
    while(*R[0] != 99999 && e-s != 0){
        sort(R.begin(), R.end(), compareValue);
        if(e - s > *R[N-1] - *R[0]){
            e = *R[N-1];
            s = *R[0];
        }
        R[0]++;
    }
   cout<<s<<' '<<e; 
}

/*
3 
5 4 10 15 24 26 
4 0 9 12 20 
4 5 18 22 30

5 5 5 9 
*/
