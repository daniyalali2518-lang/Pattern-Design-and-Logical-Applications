#include <stdio.h>

int main() {
    int total_rows = 9;
    int total_cols = 5;
    int i,j;
    
    for (i = 1; i <= total_rows; i++) {
	
        for (j = 1; j <= total_cols; j++) {
        	
            if ((i + j >= 6) && (i + j <= 10)) {
                if (j == 1 || j == 5 || (i + j == 6) || (i + j == 10)) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
