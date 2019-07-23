#include <stdio.h>
int main() {
    int t, x, i, min, max;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d", &x);
        if (i == 0) {
            min = x;
            max = x;
        }
        if (x < min) {
            min = x;
        } else if (x > max) {
            max = x;
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}
