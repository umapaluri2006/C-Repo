#include <stdio.h>
#include <stdbool.h>
bool isFibonacci(int n) {
    int a = 0, b = 1, temp;
    while (a <= n) {
        if (a == n) {
            return true; 
        }
        temp = a + b;
        a = b;
        b = temp;
    }
    return false;
}
int main() {
    int n;
    scanf("%d", &n);
    if (isFibonacci(n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
