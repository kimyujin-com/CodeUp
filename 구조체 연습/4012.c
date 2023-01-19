#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct cClass
{
	int score;
	int rank;
}CClass;

int main(void)
{
	int n;
	int i, j;
	CClass s[200];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &s[i].score);
		s[i].rank = 1;
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (s[i].score < s[j].score)
				s[i].rank++;

	for (i = 0; i < n; i++)
		printf("%d %d\n", s[i].score, s[i].rank);
}
