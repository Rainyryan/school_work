#include<iostream>
#include<vector>
#include<>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define ar array
#define mp make_pair
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define sortall(c) sort(all(c))
#define sortrall(c) sort(rall(c))
#define sz(x) (int)(x).size()
#define int_max 0x7fffffff
#define INF int_max
#define init 0x3f3f3f3f

namespace __input {
    template <class T1, class T2> void re(pair<T1, T2> &p);
    template <class T> void re(vector<T> &a);
    template <class T, size_t SZ> void re(array<T, SZ> &a);
 
    template <class T> void re(T &x) { cin >> x; }
    void re(double &x) { string t; re(t); x = stod(t); }
    template <class Arg, class... Args> void re(Arg &first, Args &...rest) { re(first); re(rest...); }
 
    template <class T1, class T2> void re(pair<T1, T2> &p) { re(p.first, p.second); }
    template <class T> void re(vector<T> &a) { for (auto &x : a) re(x); }
    template <class T, size_t SZ> void re(array<T, SZ> &a) { for (auto &x : a) re(x); }
}
using namespace __input;

const int d4i[4] = {-1, 0, 1, 0}, d4j[4] = {0, 1, 0, -1};
const int d8i[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const char nl = '\n';

vector<int> readLine(){
	string s{};
	int n;
	getline(cin, s);
	stringstream ss{s};
	vector<int> v;
	while (ss >> n){
		v.push_back(n);
	}
	return v;
}

int n;
vt<int> v;
vt<int> rem;
vt<ll> cnt;
vt<ll> tree;

void update(int p, ll x, int idx = 1, int l = 0, int r = n){
	if (l + 1 == r){
		cnt[p] = x;
		tree[idx] = x;
		return;
	}
	int mid = l + (r - l) / 2;
	if (p < mid){
		update(p, x, 2 * idx, l, mid);
	}
	else {
		update(p, x, 2 * idx + 1, mid, r);
	}
	tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
}

ll query(int x, int y, int idx = 1, int l = 0, int r = n){
	if (x >= r || y <= l) return 0;
	if (x <= l && y >= r) return tree[idx];
	int mid = l + (r - l) / 2;
	return query(x, y, 2 * idx, l, mid) + query(x, y, 2 * idx + 1, mid, r);
}