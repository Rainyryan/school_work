#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float N, K, a, b, c,k;
    cin>>N>>K;
    string s;
    unordered_map<float, string> M;
    vector<float> V;
    V.reserve(N);
    
    for(int i = 0; i < N; ++i){
        cin>>a>>b>>c>>s;
        k = 100*c/(a+b+c);
        M[k] = s;
        V.push_back(k);
    }
    sort(V.begin(), V.end(), greater<float>());
    cout<<M.at(V[K-1])<<'\n';
}

/*
10 3
15 15 55 Margarita 
10 15 45 WhiteLady 
10 20 60 SilentThird 
30 25 50 XYZ 
20 20 60 SideCar 
25 15 55 Balalaika 
10 10 35 OldFashion 
15 10 30 Mojito 
25 20 60 CubaLibre 
30 15 40 Highball
*/