#include<stdio.h>

void evenArray(int *arr, int &n, int i, int j) {
    if (i == n) {
        n = j;
        return;
    }

    if (arr[i] % 2 == 0) arr[j++] = arr[i];
    evenArray(arr, n, ++i, j);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    evenArray(arr, n, 0, 0);
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}