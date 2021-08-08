#include<stdio.h>

void gcd(int n, int i) {
    if (n % i == 0) {
        printf("gcd: %d", i);
        return;
    }
    gcd(i, n % i);
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
    gcd(n, m);
}