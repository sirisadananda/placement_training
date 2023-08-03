#include <stdio.h>

int main() {
    int V, W, TW, FW;


    printf("Enter the total number of vehicles (two-wheelers + four-wheelers): ");
    scanf("%d", &V);

    printf("Enter the total number of wheels: ");
    scanf("%d", &W);

    FW = (W - 2 * V) / 2;
    TW = V - FW;


    printf("TW = %d\n", TW);
    printf("FW = %d\n", FW);

    return 0;
}
