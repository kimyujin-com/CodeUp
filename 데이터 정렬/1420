//세 번째로 높은 학생의 이름을 출력한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, n, cnt, score[50], rank[50];
	char name[50][50];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%s %d", name[i], &score[i]);

	for (i = 0; i < n; i++) {
		cnt = 1;
		for (j = 0; j < n; j++)
			if (score[i] < score[j])
				cnt++;
		rank[i] = cnt;
	}
	for (i = 0; i < n; i++)
		if (rank[i] == 3)
			printf("%s", name[i]);
}
