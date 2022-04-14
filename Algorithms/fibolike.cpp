#include<iostream>
#include<vector>

using namespace std;

vector<long long int> multiply(vector<long long int> a, vector<long long int> b){
    vector< long long int> r;
    r.push_back(a[0]*b[0] + a[1]*b[2]);
    r.push_back(a[0]*b[1] + a[1]*b[3]);
    r.push_back(a[2]*b[1] + a[3]*b[2]);
    r.push_back(a[2]*b[1] + a[3]*b[3]);
    return r;
}

vector<long long int> powV(vector<long long int> V, int n){
    if(n == 1) return V;
    if(n == 2) return multiply(V,V);
    if(n % 2){
        return multiply(V, powV(powV(V,n/2),2));
    }else return powV(powV(V, n/2), 2);
}

int main(){
    int N, X, Y, a, b;
    
    cin>>N>>X>>Y>>a>>b;
    vector<long long int> V, R;
    V.push_back(a);
    V.push_back(b);
    V.push_back(1);
    V.push_back(0);
    R = powV(V, N-2);
    cout<<(R[0]*Y+R[1]*X)%(long long)(1e8+7)<<'\n';
    
}
/*
a b  Y
1 0  X

1 2 1 2
3 4 3 4


*/