#include<iostream>
#include<vector>

using namespace std;

vector<unsigned long long> multiply(vector<unsigned long long> a, vector<unsigned long long> b){
    vector< unsigned long long> r = {(a[0]*b[0] + a[1]*b[2])%(unsigned long long)(1e8+7), (a[0]*b[1] + a[1]*b[3])%(unsigned long long)(1e8+7), (a[2]*b[1] + a[3]*b[2])%(unsigned long long)(1e8+7), (a[2]*b[1] + a[3]*b[3])%(unsigned long long)(1e8+7)};
    return r;
}

vector<unsigned long long> powV(vector<unsigned long long> V, int n){
    if(n == 1) return V;
    if(n == 2) return multiply(V,V);
    if(n % 2){
        return multiply(V, powV(powV(V,n/2),2));
    }else return powV(powV(V, n/2), 2);
    
}

int main(){
    unsigned long long N, X, Y, a, b;

    cin>>N>>X>>Y>>a>>b;
    vector<unsigned long long> V = {a, b, 1, 0}, R;
    R = powV(V, N-2);
    cout<<(R[0]*Y+R[1]*X)%(unsigned long long)(1e8+7)<<'\n'; 
}
/*
a b  Y
1 0  X

1 2 1 2
3 4 3 4


*/