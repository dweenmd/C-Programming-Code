#include <stdio.h>

void multiply(int A[][N], int B[][N], int C[][N]) // function
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main()

{
    int N=3;
    int A[N][N] = {{1, 1, 1},
                   {2, 2, 2},
                   {3, 3, 3}};

    int B[N][N] = {{1, 1, 1},
                   {2, 2, 2},
                   {3, 3, 3}};

    int C[N][N];
    multiply(A, B, C);

    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
