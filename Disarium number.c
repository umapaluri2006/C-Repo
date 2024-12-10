#include <stdio.h>
#include <math.h>
int main() {
    int n, original, sum = 0, digits = 0;
    scanf("%d", &n);
    original = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        digits--;
        temp /= 10;
    }
    if (sum == original) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
