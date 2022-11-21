// merge insertion sort  (ascending order), plot the graph
// a) using a series of random number (500, 1000, 5000, 10000)
// b) using a series of ascending order (500, 1000, 5000, 10000)
// c) using a series of descending order (500, 1000, 5000, 10000)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int THRESHOLD = 16;
void insertionSort(int *A, int p, int q) {
    for (int i = p; i < q; i++) {
        int tempVal = A[i + 1];
        int j = i + 1;
        while (j > p && A[j - 1] > tempVal) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = tempVal;
    }
}
void merge(int *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int l, int r)
{
    int mid = l + (r - l) / 2;

    if (l - r <= THRESHOLD)
        insertionSort(arr, l, r);
    else
    {
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid,r);
        merge(arr,l,mid,r);
    }
}


void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void generateRandomArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] = rand() % size;
}

int main()
{
    int arr[100];
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);
    generateRandomArray(arr, size);
    printf("Unsorted array: \n");
    printArray(arr, size);
    mergeSort(arr, 0, size - 1);
    printf("Sorted array: \n");
    printArray(arr, size);
    printf("\n");
    return 0;
}