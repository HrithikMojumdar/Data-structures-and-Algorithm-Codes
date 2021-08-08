#include<stdio.h>
#include <climits>

void print2ndLargest(int *arr, int n, int max1, int max2) {
    if (n < 0) {
        printf("2nd largest is : %d", max2);
        return;
    }
    if (arr[n - 1] > max1) {
        max2 = max1;
        max1 = arr[n - 1];
    } else if (arr[n - 1] > max2 && arr[n - 1] < max1) {
        max2 = arr[n - 1];
    }
    print2ndLargest(arr, n - 1, max1, max2);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    print2ndLargest(arr, n, INT_MIN, INT_MIN);
}