#include<stdio.h>

void search(int *arr, int i, int j, int value) {
    int mid = (i + j) / 2;
    if (i > j) {
        printf("not found\n");
        return;
    }
    if (arr[mid] == value) {
        printf("%d\n", mid);
        return;
    }
    value > arr[mid] ? i = mid + 1 : j = mid - 1;

    search(arr, i, j, value);
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
        search(arr, 0, n - 1, value);
    }
}