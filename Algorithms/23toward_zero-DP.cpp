#include <iostream>

using namespace std;

int findMin(int arr[], int n){
    int sum = 0;
    int i, j;
    for(i = 0; i < n; i++) sum += arr[i];

    int y = sum/2 + 1;
    bool dp[y];		//dp[i] means that is a sum of part of arr
    for(i = 0; i < y; i++) dp[i] = 0;
    dp[0] = true;	//a sum of 0 is achievable if you don't choose any element
    for(i = 0; i < n; i++){	//for each element in arr
        for(j = y - 1; j >= arr[i]; j--)	//from the back of dp, to arr[i]th element of dp
            if(dp[j - arr[i]]) dp[j] = true;	//if after we remove the current element (arr[i]),
        for(int j = 0; j < y; ++j) cout<<dp[j];
        cout<<'\n';
    }
    						//i.e. (dp[j-arr[i]]) still holds, then it means that
						//a sum of j (dp[j]) is also achievable
    for(i = y - 1; i >= 0; i--) if(dp[i]) return (sum - 2 * i);		//iterate backwards to get the min difference
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
