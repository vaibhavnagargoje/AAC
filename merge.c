#include <stdio.h>

void printArray(int A[], int n)
{
	int i;
    for (i = 0; i < 12; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    int m;
    for (m = low; m <= high; m++)
    {
        A[m] = B[m];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    
    int A[] = {9, 1, 4, 14, 4, 15, 6,34,78,3,45,76};
    int n = sizeof(A)/sizeof(int);
    printArray(A, n);
    mergeSort(A, 0, n);
    printArray(A, n);
    return 0;
}
