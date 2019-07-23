#include <stdio.h>
int main() {
    int m, d, i, r;
    int sum = 0;
    scanf("%d %d", &m, &d);
    for(i = 1; i < m; i++){
        if (i == 2) {
            sum += 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            sum += 30;
        } else {
            sum += 31;
        }
    }
    sum += d;
    r = sum % 7;
    switch (r) {
        case 0: printf("SUN\n"); break;
        case 1: printf("MON\n"); break;
        case 2: printf("TUE\n"); break;
        case 3: printf("WED\n"); break;
        case 4: printf("THU\n"); break;
        case 5: printf("FRI\n"); break;
        case 6: printf("SAT\n"); break;
        default: break;
    }
    return 0;
}
