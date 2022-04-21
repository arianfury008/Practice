#include <stdio.h>

#define V 1000
#define A 3
#define T 1


int main() {
    int storage =0;
    int videoFile =0;
    int textFile =0;
    int AudioFile =0;

    printf("Your phone storage : \n");
    scanf("%d",&storage);

    printf("\nHow many videoFile do you have ? \n");
    scanf("%d",&videoFile);

    printf("\nHow many textFile do you have ? \n");
    scanf("%d",&textFile);

    printf("\nHow many AudioFile do you have ? \n");
    scanf("%d",&AudioFile);

    int VStorage , AStorage , TStorage;
    VStorage = V * videoFile;
    AStorage = A * AudioFile;
    TStorage = T * textFile;

    storage = storage - (VStorage + AStorage + TStorage);
    printf("storage your phone is %dG",storage);
    return 0;
}
