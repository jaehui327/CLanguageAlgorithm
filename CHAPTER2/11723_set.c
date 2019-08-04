#include <stdio.h>
int main() {
    int t, i, x;
    unsigned int k = 0;
    char s[10];
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%s", s);
        switch (s[1]) {
            case 'd':
                scanf("%d", &x);
                k |= (1 << x)
                break;
            case 'e':
                scanf("%d", &x);
                k &= ~(1 << x);
                break;
            case 'h':
                scanf("%d", &x);
                printf("%d\n", k & (1 << x) ? 1 : 0);
                break;
            case 'o':
                scanf("%d", &x);
                k ^= (1 << x);
                break;
            case 'l':
                k = (1 << 22) - 1;
                break;
            case 'm':
                k = 0;
                break;
        }
    }
    return 0;
}
