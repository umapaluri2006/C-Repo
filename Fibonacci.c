#include <stdio.h>
int main() {
    int n, a = 0, b = 1, temp;
    scanf("%d", &n);
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);
    for (int i = 3; i <= n; i++) {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}
