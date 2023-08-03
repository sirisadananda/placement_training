#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    int len, count_star = 0, count_hash = 0;


    printf("Enter the string: ");
    scanf("%s", S);

    len = strlen(S);


    for (int i = 0; i < len; i++) {
        if (S[i] == '*') {
            count_star++;
        } else if (S[i] == '#') {
            count_hash++;
        }
    }

    int result = count_star - count_hash;


    if (result > 0) {
        printf("Output: %d (Positive integer)\n", result);
    } else if (result < 0) {
        printf("Output: %d (Negative integer)\n", result);
    } else {
        printf("Output: %d (Zero)\n", result);
    }

    return 0;
}
