#include <stdio.h>

// Swap function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Selection Sort
void selectionSort(int arr[], int n){
   for (int i = 0; i < n-1; i++)
   {
    int min_index = i;
    for (int j = i+1; j < n; j++)
    {
        if (arr[j] < arr[min_index])
        {
            min_index = j;
        }
    }
    swap(&arr[min_index], &arr[i]);
   }
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[] = {20, 12, 10, 15, 2};
    int n = sizeof(arr) /sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array ");
    printArr(arr,n);
}

