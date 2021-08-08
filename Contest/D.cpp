#include<bits/stdc++.h>

using namespace std;

int triangle[100][100];
int sum[100][100];

int largestSum(int n, int i, int j);

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int cases;
    scanf("%d", &cases);
    int n;
    for (int i = 0; i < cases; ++i) {
        memset(triangle, 0, sizeof(triangle));
        memset(sum, 0, sizeof(sum));

        scanf("%d", &n);
        for (int j = 0; j < n; ++j)
            for (int k = 0; k <= j; ++k)
                scanf("%d", &triangle[j][k]);
        printf("%d\n", largestSum(n, 0, 0));
    }
}

int largestSum(int n, int i, int j) {
    if (i == n - 1) return triangle[i][j];

    if (sum[i][j] != 0) return sum[i][j];
    sum[i][j] = triangle[i][j] + max(largestSum(n, i + 1, j), largestSum(n, i + 1, j + 1));
    return sum[i][j];
}
