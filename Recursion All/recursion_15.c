#include<stdio.h>

int reverse(int n, int m) {
    if (n == 0) return m;
    m = m * 10 + n % 10;
    return reverse(n / 10, m);

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", reverse(n, 0));
}