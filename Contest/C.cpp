#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll f[1001], g[1001], h[1001];
    f[0] = g[0] = h[0] = 1;
    f[1] = h[1] = 1;
    g[1] = 2;
    for (int i = 2; i < 1001; ++i) {
        f[i] = f[i - 2] + f[i - 1] + 2 * g[i - 2] + h[i - 2];
        g[i] = f[i] + g[i - 1];
        h[i] = f[i] + h[i - 2];
    }
    int n, r;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &r);
        printf("%d %d\n", i, f[r]);
    }
}