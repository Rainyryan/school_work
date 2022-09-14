#include<iostream>
#include<climits>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cursum = 0, globalsum = INT_MIN;
    cin>>n;

    int arr[n], max_[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];

    for(int i = n-1; i >= 0; --i){
        cursum += arr[i];
        globalsum = max(cursum, globalsum);
        max_[i] = globalsum;
        cursum = max(0, cursum);
    }

    cursum = 0;
    globalsum = INT_MIN;
    int ans = arr[0], tmp_ans = 0;
    for(int i = 0; i < n-1; ++i){
        cursum += arr[i];
        globalsum = max(cursum, globalsum);
        tmp_ans = globalsum + max_[i+1];
        ans = max(ans, tmp_ans);
        cursum = max(0, cursum);
    }
    cout<<ans;
}


/*
10
-10 10 -4 5 -6 3 -1 -6 -8 6

*/