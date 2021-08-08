#include<stdio.h>

void print(int *arr, int n) {
    if (n == 0)return;
    printf("%d ", arr[n-1]);
    print(arr, n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    print(arr, n);
}