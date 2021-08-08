#include<stdio.h>
#include <cmath>

void printPolinomial(int n, int x, int sum) {
    if (n == 0 || n == 1) {
        printf("%d\n", sum + 1);
        return;
    }
    sum = sum + pow(x, n - 1);
    printPolinomial(n - 1, x, sum);
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    printPolinomial(n, x, 0);
}