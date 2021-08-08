#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int start, int mid, int end) {
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end)
        temp[k++] = arr[i] < arr[j] ? arr[i++] : arr[j++];
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= end)
        temp[k++] = arr[j++];
    k = 0;
    while (start <= end)
        arr[start++] = temp[k++];
}

void mergeSort(int *arr, int i, int j) {
    if (i == j)return;
    int mid = (i + j) / 2;
    mergeSort(arr, i, mid);
    mergeSort(arr, mid + 1, j);
    merge(arr, i, mid, j);
}

int main() {
    int n;
    printf("Array size:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}