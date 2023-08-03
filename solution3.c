#include <stdio.h>
#include <stdlib.h>

int main()
{
    int main() {
    int N;
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    int Arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }

    int max_element = Arr[0];
    int count = 1;

    for (int i = 1; i < N; i++) {
        if (Arr[i] > max_element) {
            max_element = Arr[i];
            count++;
        }
    }

    printf("Output: %d\n", count);

    return 0;
}
}
