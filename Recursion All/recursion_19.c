#include<stdio.h>

void preOrder(int n) {
    if (n == 1 || n == 2) {
        printf("%d ", n);
        return;
    }
    printf("%d ", n);
    preOrder(n - 2);
    preOrder(n - 1);
}

void inOrder(int n) {
    if (n == 1 || n == 2) {
        printf("%d ", n);
        return;
    }
    inOrder(n - 2);
    printf("%d ", n);
    inOrder(n - 1);
}

void postOrder(int n) {
    if (n == 1 || n == 2) {
        printf("%d ", n);
        return;
    }
    postOrder(n - 2);
    postOrder(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("inOrder:");
    inOrder(n);
    printf("\n");
    printf("preOrder:");
    preOrder(n);
    printf("\n");
    printf("postOrder:");
    postOrder(n);
    printf("\n");
}