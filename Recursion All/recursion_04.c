#include<stdio.h>

void printPolinomial(int i, int n) {
    if (i == n || !n) return;
    if (!i) printf("1");
    else if (i == 1) printf(" + x");
    else printf(" + x^%d", i);

    printPolinomial(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    printPolinomial(0, n);
}