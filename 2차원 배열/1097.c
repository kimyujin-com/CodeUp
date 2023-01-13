#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void turnTable(int(*a)[20], int size)
{
    int j, x, y;

    scanf("%d %d", &x, &y);

    for (j = 1; j <= 19; j++) //가로 줄 흑<->백 바꾸기
    {
        if (*(a[x] + j) == 0) 
            *(a[x] + j) = 1;
        else *(a[x] + j) = 0;
    }
    for (j = 1; j <= 19; j++) //세로 줄 흑<->백 바꾸기
    {
        if (*(a[j] + y) == 0) 
            *(a[j] + y) = 1;
        else *(a[j] + y) = 0;
    }
}
void printTable(const int(*a)[20], int size)
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
    int n, i, j;
    int a[20][20] = { 0 };
    int rowNb;

    for (i = 1; i <= 19; i++) //한 줄씩 바둑판 상황 입력 받기
        for (j = 1; j <= 19; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &n); //좌표 개수 입력받기

    rowNb = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < n; i++)
        turnTable(a, rowNb);

    printTable(a, rowNb);
}



