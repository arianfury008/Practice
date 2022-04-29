#include <stdio.h>


//Arian khatiban
// Exercise7-4
int main() {
    // asln az tamrin nmishe fahmid chi az ma mikhad :\

    int arr[] = {5, 2, 8, 7, 1};
    int temp = 0;

    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    //Sort the array in ascending order
    for (int i = 0; i < length; i++) {
        for (int j = i+1; j < length; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // nmone sort kardn array
}
