#include<bits/stdc++.h>

using namespace std;

int main() {
    int c, n;
    cin >> c;
    for (int i = 1; i <= c; i++) {
        cin >> n;
        int t[250][250], v = 0, r;
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= j; k++) {
                cin >> r;
                t[j][k] = r + max(t[j - 1][k - 1], t[j - 1][k]);
                v = max(v, t[j][k]);
            }
        for (int j = n + 1; j <= 2 * n + 1; ++j)
            for (int k = 1; k <= 2 * n - j; ++k) {
                cin >> r;
                t[j][k] = r + max(t[j - 1][k + 1], t[j - 1][k]);
                v = max(v, t[j][k]);
            }
        printf("Case %d: %d\n", i, v);
    }
}