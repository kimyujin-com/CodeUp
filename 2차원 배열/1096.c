#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printTable(const int (*a)[20], int size)
{
    int i, j;

    for (i = 1; i <= size - 1; i++) //한 줄(위에서 아래로) 씩
    {
        for (j = 1; j <= 19; j++) //한 열(왼쪽에서 오른쪽으로) 씩
            printf("%d ", *(a[i] + j)); //값 출력
        printf("\n"); //줄 바꾸기
    }
}
int main(void)
{
    int n, i, x, y;
    int a[20][20] = {0};
    int rowNb;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
    }

    rowNb = sizeof(a) / sizeof(a[0]);
    printTable(a, rowNb);
}



