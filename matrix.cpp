#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[1000][1000], B[1000][1000];

    // Read first matrix
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &A[i][j]);

    // Read second matrix
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &B[i][j]);

    // Print sum of both matrices
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j] + B[i][j]);
            if (j != M - 1) printf(" "); // Avoid trailing space
        }
        printf("\n");
    }

    return 0;
}


