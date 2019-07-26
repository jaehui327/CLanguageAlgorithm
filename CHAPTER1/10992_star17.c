#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for(j = i; j < n - 1; j++) {
            printf(" ");
        }
        for(j = 0; j <= i * 2; j++) {
            if(i == n - 1) {
                printf("*");
            } else {
                if(j == 0 || j == i * 2) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
