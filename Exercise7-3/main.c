#include <stdio.h>

// Arian Khatiban
// Exercise7-3
int main() {
    //Initialize array
    double arrfirst[] = {-10.5, -1.8, 3.5, 6.3, 7.2};
    double arrsecound[] = {-1.8,3.1,6.3};
    int temp = 0;


    int length = sizeof(arrfirst)/sizeof(arrfirst[0]);
    int length2 = sizeof(arrsecound)/sizeof(arrsecound[0]);

    //Displaying elements of original array
    printf("Elements of original first Array: \n");
    for (int i = 0; i < length; i++) {
        printf("%lf ", arrfirst[i]);
    }

    printf("\nElements of original Second Array: \n");
    for (int i = 0; i < length2; i++) {
        printf("%lf ", arrsecound[i]);
    }

    // res = firstarray + secondArray
    double ResultArr[] = {-10.5, 3.5, 7.2,3.1,6.3,-1.8};

    int lengthRes = sizeof(ResultArr)/sizeof(ResultArr[0]);

    //Sort the ResultArr in ascending order
    for (int i = 0; i < lengthRes; i++) {
        for (int j = i+1; j < lengthRes; j++) {
            if(ResultArr[i] > ResultArr[j]) {
                temp = ResultArr[i];
                ResultArr[i] = ResultArr[j];
                ResultArr[j] = temp;
            }
        }
    }

    printf("\nElements of Result array: \n");
    for (int i = 0; i < lengthRes; i++) {
        printf("%lf ", ResultArr[i]);
    }

    printf("\n");
    return  0;
}
