#include <stdio.h>

int main() {
    int arr[] = { 1, 2, 3, 4, 1, 2, 4, 5, 3, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];


    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

   
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    
    printf("Eleman\tFrekans\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] > 0) {
            printf("%d\t%d\n", i, freq[i]);
        }
    }

    return 0;
}
