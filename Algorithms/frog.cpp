#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, W, P, pp = 0, m = 0;
    char S;
    cin>>T;
    for(int i = 0; i < T; ++i){
        cin>>N>>W;
        for(int j = 0; j < N; ++j){
            cin>>S>>P;
            if(S == 'b'){
                m = max(m, P - pp);
                pp = P;
            }
        }
        m = max(m, W - pp);
        cout<<m<<'\n';
        pp = 0;
        m = 0;
    }
}

/*
3 
1 10 
b 5 
1 10 
s 5 
2 10 
b 3 s 6

1 
3 20 
s 5 b 10 s 16

*/
