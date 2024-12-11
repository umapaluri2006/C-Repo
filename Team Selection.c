#include <stdio.h>
int main() {
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int y[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
        if (5 - y[i] >= k) {
            count++;
        }
    }
    int teams = count / 3;
    printf("%d\n", teams);
    return 0;
}