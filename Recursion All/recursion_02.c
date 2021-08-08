#include<stdio.h>

void print(int *arr, int i, int j) {
    if (i > j)return;
    printf("%d %d\n", arr[i], arr[j]);
    print(arr, ++i, --j);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    print(arr, 0, n - 1);
}