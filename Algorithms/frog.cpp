#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, W, P, pp = 0, max = 0;
    char S;
    cin>>T;
    for(int i = 0; i < T; ++i){
        cin>>N>>W;
        for(int j = 0; j < N; ++j){
            cin>>S>>P;
            if(S == 'b' && P - pp > max){
                max = P;
                pp = P;
            }
        }
        max = std::max(max, W - pp);
        cout<<max<<'\n';
        pp = 0;
        max = 0;
    }
}

/*
4 
1 10 
b 5 
1 10 
s 5 
2 10 
b 3 s 6 
3 20 
s 5 b 10 s 16

*/