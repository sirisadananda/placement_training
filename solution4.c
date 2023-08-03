#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }


    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }


    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
