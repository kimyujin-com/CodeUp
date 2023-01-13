#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d[1001][1001];
int sumD[1001][1001];
int sumArray(int n, int m);
void printArray(int n, int m, int t[1001][1001]);

int main(void)
{
    int n, m, k;
    int x1, x2, y1, y2, u;
    int i, j;

    scanf("%d %d %d", &n, &m, &k);
    for (i = 1; i <= k; i++) {
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
        d[x1][y1] = d[x1][y1] + u;
        d[x2 + 1][y2 + 1] = d[x2 + 1][y2 + 1] + u;

        d[x1][y2 + 1] = d[x1][y2 + 1] - u;
        d[x2 + 1][y1] = d[x2 + 1][y1] - u;
    }

    printArray(n, m, d);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            sumD[i][j] = -7000;
    sumArray(n, m);
    printf("\n");
    printArray(n, m, sumD);
}
int sumArray(int n, int m)
{
    if (sumD[n][m] != -7000)
        return sumD[n][m];
    else if (n == 0 && m == 0)
        sumD[n][m] = d[n][m];
    else if (m == 0)
        sumD[n][m] = d[n][m] + sumArray(n - 1, m);
    else if (n == 0)
        sumD[n][m] = d[n][m] + sumArray(n, m - 1);
    else
        sumD[n][m] = d[n][m] + sumArray(n - 1, m) + sumArray(n, m - 1) - sumArray(n - 1, m - 1);
    return sumD[n][m];
}
void printArray(int n, int m, int t[1001][1001])
{
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}
