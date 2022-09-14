#include<iostream>
#include<vector>

using namespace std;

vector<unsigned long> multiply(vector<unsigned long> a, vector<unsigned long> b){
    vector< unsigned long> r = {(a[0]*b[0] + a[1]*b[2]), (a[0]*b[1] + a[1]*b[3]), (a[2]*b[0] + a[3]*b[2]), (a[2]*b[1] + a[3]*b[3])};
    return r;
}

vector<unsigned long> powV(vector<unsigned long> V, int n){
    if(n == 1) return V;
    if(n == 2) return multiply(V,V);
    if(n % 2){
        return multiply(V, powV(powV(V,n/2),2));
    }else return powV(powV(V, n/2), 2);
    
}

int main(){
    unsigned long N, X=1, Y=1, a=1, b=1;

    cin>>N;
    N += 1;
    vector<unsigned long> V = {a, b, 1, 0}, R;
    if(N == 2){
        cout<<1;
        return 0;
    }
    R = powV(V, N-2);
    cout<<(R[0]*Y+R[1]*X)<<'\n'; 
}
/*
a b  Y
1 0  X

1 2 1 2
3 4 3 4


*/