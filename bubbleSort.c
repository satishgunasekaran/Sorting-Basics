#include <stdio.h>

// Bubble Sort
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j+1] < arr[j])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
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
    int arr[] = {-2, 45, 0, 11, -9};
    
    int n = sizeof(arr) /sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted array ");
    printArr(arr,n);
}

