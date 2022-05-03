#include <iostream>

using namespace std;

int findMin(int arr[], int n){
    int sum = 0;
    int i, j;
    for(i = 0; i < n; i++) sum += arr[i];

    int y = sum/2 + 1;
    bool dp[y];
    for(i = 0; i < y; i++) dp[i] = 0;

    for(i = 0; i < n; i++)
        for(j = y - 1; j >= arr[i]; j--)
            if(dp[j - arr[i]] || j == arr[i]) dp[j] = true;
     
    for(i = y - 1; i >= 0; i--) if(dp[i]) return (sum - 2 * i);
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
    
    cout<<findMin(arr, n);
    delete[] arr;
}
