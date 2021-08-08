#include<stdio.h>

void search(int *arr, int n, int value) {
    if (n == 0) {
        printf("not found\n");
        return;
    }
    if (arr[n - 1] == value) {
        printf("%d\n", n - 1);
        return;
    }
    search(arr, n - 1, value);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    int q, value;
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &value);
        search(arr, n, value);
    }
}