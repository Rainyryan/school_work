#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findMed(vector<int> v){
    
    vector<int> small, big; // partition 的 目 的 是 分 成 兩 堆 ， small 與 big for(inti=0;i<n;i++){// 照順序掃描原陣列
    if(pivot > v[i]) small.push_back(v[i]); // 將 比pivot小 的 數 字 ， 放 入small
    if(pivot < v[i]) big.push_back(v[i]); // 將 比pivot大 的 數 字 ， 放 入big }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, a;
    vector<int> V;
    cin>>N;
    for(int i = 0; i < N; ++i){
        cin>>a;
        V.push_back(a);
    }
    findMed(V);
    
    
}

/*

7
5 1 2 3 4 7 6


1 2 - 3 - 5 4 - 7 6


3
3
5

*/