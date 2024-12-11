#include <stdio.h>
int is_abundant(int number) {
    int sum_of_factors = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum_of_factors += i;
        }
    }
    return sum_of_factors > number;
}
int main() {
    int N;
    scanf("%d", &N);
    if (is_abundant(N)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}