#include <stdio.h>
// Swap function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int s, int e){
    int pivot = arr[e];
    int i = s-1;

   for (int j = s; j <= e-1; j++)
   {
     if (arr[j] < pivot)
     {
        i++;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
     }
   }
   i++;
   
   int temp = arr[i];
   arr[i] = arr[e];
   arr[e] = temp;

   return i;

}

// Insertion Sort
void quickSort(int arr[], int s, int e){
  if (e <= s)
  {
    return;
  }
  int pivot = partition(arr, s,e);
  quickSort(arr, s, pivot -1);
  quickSort(arr, pivot+1, e);
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[] = {8,2,5,3,9,4,7,6,1};
    int n = sizeof(arr) /sizeof(arr[0]);
    quickSort(arr,0,n-1);
    printf("Sorted array ");
    printArr(arr,n);
}

