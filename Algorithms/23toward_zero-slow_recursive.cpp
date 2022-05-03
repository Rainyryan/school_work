#include <iostream>
#include <algorithm>

using namespace std;

int solve(int arr[], int i, int partsum, int totalsum){
    if(!i) return abs((totalsum - partsum) - partsum);
    return min(solve(arr, i - 1, partsum + arr[i-1], totalsum), solve(arr, i - 1, partsum, totalsum));
}

int findMin(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];

    return solve(arr, n, 0, sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<findMin(arr, n);
    delete [] arr;
}