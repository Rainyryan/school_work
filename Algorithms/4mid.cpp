#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

#define int long long
 
int qpow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int a[65];
void init() {
    for (int i = 0; i <= 61; i++) {
        a[i] = qpow(2, i);
    }
}
 
int solve(int mi, int p) {
    vector<int> x1, x2;
    while (mi) {
        x1.push_back(mi % 10);
        mi /= 10;
    }
    while (p) {
        x2.push_back(p % 10);
        p /= 10;
    }
    reverse(x1.begin(), x1.end()), reverse(x2.begin(), x2.end());
    int l1 = x1.size(), l2 = x2.size();
    int ans = 0;
    int i = 0, j = 0;
    for (i = 0; i < l1; i++) {
        if (j == l2) {
            break;
        }
        if (x1[i] != x2[j]) {
            ans++;
            continue;
        } else {
            j++;
        }
    }
    if (i != l1) ans += l1 - i;
    if (j != l2) ans += l2 - j;
    return ans;
}
signed main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    init();
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int minn = INT_MAX;
        for (int i = 0; i <= 61; i++) {
            int res = 0;
            res = solve(n, a[i]);
            minn = min(res, minn);
        }
        cout << minn << "\n";
    }
    return 0;
}