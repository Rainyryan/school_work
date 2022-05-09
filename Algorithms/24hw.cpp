#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int find_max_points(int* points, int* time, int m, int n){
    int max_points[m+1];
    memset(max_points, 0, sizeof(max_points));
    
    for(int i = 0; i < n; ++i){
        for(int j = m; j - time[i] >= 0; --j)
            max_points[j] = max(max_points[j], max_points[j - time[i]] + points[i]);
        //for(int j = 0; j < m; ++j) cout<<max_points[j]<<' ';
        //cout<<'\n';
    }

    return max_points[m];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    int time[n], points[n];
    for(int i = 0; i < n; i++) cin>>points[i]>>time[i];
    cout<<find_max_points(points, time, m, n);
}

/*
3 1440 
30 500 
30 600 
40 1000

60

3 10
30 3
30 4
50 7


6 2880 
20 400 
10 500 
10 1000 
30 400 
20 700 
10 100

90

*/