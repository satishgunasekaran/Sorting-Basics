#include <stdio.h>

// Swap function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Insertion Sort
void insertionSort(int arr[], int n){
   for (int i = 1; i < n; i++)
   {
    int key = arr[i];
    int j = i-1;

    while (key < arr[j] && j >= 0)
    {
        arr[j+1] = arr[j];
        --j;   
    }
    arr[j+1] = key;
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
    int arr[] = {9, 5, 1, 4, 3};
    int n = sizeof(arr) /sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array ");
    printArr(arr,n);
}

