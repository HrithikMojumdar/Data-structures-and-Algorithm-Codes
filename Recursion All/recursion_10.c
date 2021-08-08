#include<stdio.h>

void lcm(int n, int m, int i) {
    if (n * i % m == 0) {
        printf("lcm: %d", n * i);
        return;
    }
    lcm(n, m, i + 1);
}

void swap(int &n, int &m) {
    int i = n;
    n = m;
    m = i;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if (n < m) swap(n, m);
    lcm(n, m, 1);
}