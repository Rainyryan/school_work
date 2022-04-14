#include<iostream>

using namespace std;

struct Matrix{
    int m[2][2];
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, Y, a, b;
    cin>>N>>X>>Y>>a>>b;

    Matrix M;
    M.m[0][0] = a;
    M.m[0][1] = b;
    M.m[1][0] = 1;
    M.m[1][1] = 0;
    

}