#include <stdio.h>
int main() {
    char s[101];
    while(fgets(s, 100, stdin) > 0){
        printf("%s", s);
    }
    return 0;
}
