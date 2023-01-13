//세 수를 오름차순으로 정렬하려고 한다. (낮은 숫자 -> 높은 숫자)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, cnt, d[3], rank[3];

	for (i = 0; i < 3; i++)
		scanf("%d", &d[i]);

	for (i = 0; i < 3; i++) {
		cnt = 1;
		for (j = 0; j < 3; j++)
			if (d[j] < d[i])
				cnt++;
		rank[i] = cnt;//공동 순위 생길 수 있음
	}

	for (i = 1; i <= 3; i++)
		for (j = 0; j < 3; j++)
			if (rank[j] == i)
				printf("%d ", d[j]);
}

