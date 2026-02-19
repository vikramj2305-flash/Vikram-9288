#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    int matrix[N][M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int j = 0; j < M; j++) {
        int max = matrix[0][j];
        for(int i = 1; i < N; i++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
