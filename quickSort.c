#include <stdio.h>

void swap(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

int partitionIndex(int *arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (i < j) {
        while (pivot > arr[i] && i < high) i++;
        while (pivot <= arr[j] && j > low) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high) {
    if (low > high)return;
    int k = partitionIndex(arr, low, high);
    quickSort(arr, low, k - 1);
    quickSort(arr, k + 1, high);
}

int main() {
    int n;
    printf("Array size:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}