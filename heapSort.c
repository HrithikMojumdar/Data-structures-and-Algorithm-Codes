#include<stdio.h>
void heapify(int arr[],int parent,int size)
{
    int left = 2*parent +1;
    int right = 2 * parent +2;
    int largest = parent;
    if(left<size && arr[left] > arr[largest])
        largest = left;
    if(right < size && arr[right] > arr [largest])
        largest = right;
    if(largest != parent)
    {
        int temp = arr[parent];
        arr[parent] = arr[largest];
        arr[largest] = temp;
        heapify(arr,largest,size);
    }
}
void buildHeap(int arr[],int n)
{
    for(int i=(n/2)-1; i>=0; i--)
        heapify(arr,i,n);
}
void heapSort(int arr[],int size)
{
    buildHeap(arr,size);

    for(int i=size-1;i>0;i--){
        int max = arr[0];
        arr[0] = arr[i];
        arr[i] = max;
        heapify(arr,0,i);
    }
}
int main()
{
    int n;
    printf("Array size:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    heapSort(arr, n);
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}
