#include <stdio.h>

#define V 1 // MG      // 1000 KB
#define A 3 // MG      // 3000 KB
#define T 1 // MG      // 1000 KB


int main() {
    int storage =0;
    int videoFile =0;
    int textFile =0;
    int AudioFile =0;

    printf("Your phone storage (GB) : \n");
    scanf("%d",&storage);

    storage = storage * 1000;

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
    printf("megdar storage masraf shode : %d MG",(VStorage + AStorage + TStorage));
    printf("\n now storage : %d MG",storage);

    return 0;
}
