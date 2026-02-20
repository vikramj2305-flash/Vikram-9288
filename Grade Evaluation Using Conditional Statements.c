#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);

    if (M >= 90 && M <= 100) {
        printf("A\n");
    } else if (M >= 75 && M < 90) {
        printf("B\n");
    } else if (M >= 60 && M < 75) {
        printf("C\n");
    } else if (M >= 50 && M < 60) {
        printf("D\n");
    } else if (M >= 0 && M < 50) {
        printf("Fail\n");
    }

    return 0;
}
