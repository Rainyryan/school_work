#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, s = 0, sidx = 0, eidx = 0, cursum = 0, globalsum = INT32_MIN;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];

    for(int i = 0; i < n; ++i){
        cursum += arr[i];
        if(cursum > globalsum) {
            globalsum = cursum;
            eidx = i;
            sidx = s;
        }
        if(cursum < 0){
            cursum = 0;
            s = i+1;
        }
    }
    cout<<globalsum<<' '<<sidx+1<<' '<<eidx+1;
}


/*
5 
6 -1 5 4 -7

*/