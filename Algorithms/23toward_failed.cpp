#include <iostream>

using namespace std;

long minDifference(int arr[], int n){
    long sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];

    long y = sum/2 + 1;
    // bool *dp = new bool[y] (), *dd = new bool[y]();
    bool dp[y], dd[y];
    for(long i = 0; i < y; i++) dp[i] = dd[i] = false;
    
    dp[0] = true;
    for(long i = 0; i < n; i++){
        for(long j = 0; j + arr[i] < y; j++){
            if(dp[i]) dd[j + arr[i]] = true;
        }
        for(long j = 0; j < y; j++){
            if(dd[j]) dp[j] = true;
            dd[j] = false;
        }
    }
    for(long i = y - 1; i >= 0; i--){
        if(dp[i]) return (sum - 2*i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 0;
    cin>>n;
    int *arr = new int[n]();
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    cout<<minDifference(arr, n);
    delete[] arr;
}