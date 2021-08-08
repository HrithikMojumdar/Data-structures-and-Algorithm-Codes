#include <bits/stdc++.h>

using namespace std;

//sorted array - O(n)
//worst case - O(n^2)

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int value = arr[i];
        int hole = i;
        while (hole > 0 && value < arr[hole-1]) {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
}

int main() {
    int n;
    printf("Array size:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    insertionSort(arr, n);
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}