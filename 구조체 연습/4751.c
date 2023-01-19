#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student
{
	int cNum;
	int sNum;
	int score;
	int rank;
}Student;

int main(void)
{
	int n;
	int i, j;
	Student s[200];
	Student rank[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &s[i].cNum, &s[i].sNum, &s[i].score);
		s[i].rank = 1;
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (s[i].score < s[j].score)
				s[i].rank++;

	for (i = 0; i < n; i++)//등수대로 배열 만들기
		rank[s[i].rank - 1] = s[i];

	if ((rank[0].cNum == rank[1].cNum) && (rank[1].cNum == rank[2].cNum)) {
		for (i = 0; i < 2; i++)
			printf("%d %d\n", rank[i].cNum, rank[i].sNum);
		while (rank[i].cNum == rank[1].cNum)
			i++;
		printf("%d %d\n", rank[i].cNum, rank[i].sNum);
	}
	else
		for (i = 0; i < 3; i++)
			printf("%d %d\n", rank[i].cNum, rank[i].sNum);
}
