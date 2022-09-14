#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, W, P, prev1 = 0, prev2 = 0, M = 0;
    bool sw = true;
    char S;
    cin>>T;
    for(int i = 0; i < T; ++i){
        cin>>N>>W;
        for(int j = 0; j < N; ++j){
            cin>>S>>P;
            if(S == 'b'){
                M = prev1 < prev2 ? max(M, P - prev1) : max(M, P - prev2);
                prev1 = P;
                prev2 = P;
            }else if(sw){
                M = max(M, P - prev1);
                prev1 = P;
                sw = false;
            }else{
                M = max(M, P - prev2);
                prev2 = P;
                sw = true;
            }

        }
        M = prev1 < prev2 ? max(M, W - prev1) : max(M, W - prev2);
        cout<<M<<'\n';
        prev1 = 0;
        prev2 = 0;
        M = 0;
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
