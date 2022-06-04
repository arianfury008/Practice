#include <stdio.h>
#include "ssort.h"
#include <stdlib.h>

int main() {
    int arr[] = {rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array: \n");
    for(int  i = 0; i < n;i++){
        if(i % 10 == 0){
            printf("%d   \n",arr[i]);
        } else{
            printf("%d   ",arr[i]);
        }
    }
    selectionSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);

    int b;
    printf("\n\nInput a number to search: ");
    scanf("%d", &b);
    int index = SelectSort(arr, n, b);
    if (index != -1)
        printf("\nElement found at position: %d", index);
    else
        printf("\nElement not found..!");
    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int SelectSort(int array_nums[], int array_size, int n)
{
    int lower_pos = 0, higher_pos = array_size - 1;
    while (lower_pos <= higher_pos && n >= array_nums[lower_pos] && n <= array_nums[higher_pos])
    {
        int n_pos = lower_pos + ((n - array_nums[lower_pos]) * (higher_pos - lower_pos)) / (array_nums[higher_pos] - array_nums[lower_pos]);
        if (n > array_nums[n_pos])
            lower_pos = n_pos + 1;
        else if (n < array_nums[n_pos])
            higher_pos = n_pos - 1;
        else
            return n_pos;
    }
    return -1;
}



// A function to implement bubble sort
void selectionSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}