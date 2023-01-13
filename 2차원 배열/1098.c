#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void placeStick(int b[][101], int l, int d, int x, int y)
{
	int i;

	if (d == 0)//가로로 배치
		for (i = 0; i < l; i++)
			b[x][y++] = 1;
	else
		for (i = 0; i < l; i++)
			b[x++][y] = 1;
}

void printTable(const int(*a)[101], int w, int h)
{
	int i, j;

	for (i = 1; i <= w; i++) //한 줄(위에서 아래로) 씩
	{
		for (j = 1; j <= h; j++) //한 열(왼쪽에서 오른쪽으로) 씩
			printf("%d ", *(a[i] + j)); //값 출력
		printf("\n"); //줄 바꾸기
	}
}

int main(void)
{
	int w, h;// 격자판 가로 세로
	int n, l, d;// 막대의 갯수, 길이, 방향
	int x, y;//막대의 위치
	int i, board[101][101] = { 0 };

	scanf("%d %d", &w, &h);
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		placeStick(board, l, d, x, y);
	}

	printTable(board, w, h);
}
