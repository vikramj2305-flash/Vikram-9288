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

    for(int i = 0; i < N; i++) {
        int min = matrix[i][0];
        for(int j = 1; j < M; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
        printf("%d\n", min);
    }

    return 0;
}
