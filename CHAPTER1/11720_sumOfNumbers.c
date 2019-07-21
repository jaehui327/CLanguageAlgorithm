#include <stdio.h>
int main() {
    int t, i, x;
    int sum = 0;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%1d", &x);
        sum += x;
    }
    printf("%d\n", sum);
    return 0;
}
