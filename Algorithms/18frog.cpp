#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, W, P, prev1 = 0, prev2 = 0, m1 = 0, m2 = 0;
    bool sw = true;
    char S;
    cin>>T;
    for(int i = 0; i < T; ++i){
        cin>>N>>W;
        for(int j = 0; j < N; ++j){
            cin>>S>>P;
            if(S == 'b'){
                m1 = max(m1, P - prev1);
                prev1 = P;
                m2 = max(m2, P - prev2);
                prev2 = P;
            }else if(sw){
                m1 = max(m1, P - prev1);
                prev1 = P;
                sw = false;
            }else{
                m2 = max(m2, P - prev2);
                prev2 = P;
                sw = true;
            }

        }
        m1 = max(m1, W - prev1);
        m2 = max(m2, W - prev2);
        cout<<max(m1, m2)<<'\n';
        prev1 = 0;
        m1 = 0;
        prev2 = 0;
        m2 = 0;
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
