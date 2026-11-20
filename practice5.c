#include <stdio.h>

int main() {
    int total_rows = 9;
    int total_cols
    for (int i = 1; i <= total_rows; i++) {
        for (int j = 1; j <= total_cols; j++) {
            if ((i + j >= 6) && (i + j <= 10)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
