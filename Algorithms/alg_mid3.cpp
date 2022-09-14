#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	int n;
    cin>>n;
	vector<vector<int>> v(n, vector<int>(2,0));
	for (int i = 0; i < n; i++){
		cin >> v[i][1] >> v[i][0];
	}
	sort(v.begin(), v.end());
	int ans = 0, last = -1;
	for (int i = 0; i < n; i++){
		if (v[i][1] >= last){
			ans++;
			last = v[i][0];
		}
	}
	cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for(int i = 0; i < t; i++) solve();
}

/*


*/