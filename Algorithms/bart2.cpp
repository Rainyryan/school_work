#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, Q, a, b;
    cin >> N >> Q;

    vector<int> C(10000000 + 1, 0);
    for (int i = 0; i < N; ++i)
        cin >> a >> C[a];
    int *lit, *rit;
    for (int i = 0; i < Q; ++i) {
        cin >> a >> b;
        lit = &C[a];
        rit = &C[a];
        while (1) {
            if (lit > &C[0] && *lit >= b) {
                cout << lit - &C[0] << '\n';
                break;
            } else if (rit < &C[10000000] && *rit >= b) {
                cout << rit - &C[0] << '\n';
                break;
            } else if (lit <= &C[0] && rit >= &C[10000000]) {
                cout << "-1\n";
                break;
            }
            --lit;
            ++rit;
        }
    }
}