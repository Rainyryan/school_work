#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, Q, a, b;
    cin>>N>>Q;

    vector<int> C(N+1, 0);
    for(int i = 0; i < N; ++i) cin>>a>>C[a];
    int* lit, *rit;
    for(int i = 0; i < Q; ++i){
        cin>>a;
        cin>>b;
        lit = &C[a];
        rit = &C[a];
        while(1){
            if(lit > &C[0] && *lit >= b){
                cout<<lit-&C[0]<<'\n';
                break;
            }else if(rit <= &C[N] && *rit >= b){
                cout<<rit-&C[0]<<'\n';
                break;
            }else if(lit <= &C[0] && rit > &C[N]){
                cout<<"-1\n";
                break;
            }
            --lit;
            ++rit;
        }
    }
}

/*
3 3 
2 2 
1 2 
3 2 
3 1 
3 3 
5 2

5 3 
1 4 
2 3 
3 5 
4 1 
5 2 
2 3 
2 4 
2 5

3 
-1 
3
*/