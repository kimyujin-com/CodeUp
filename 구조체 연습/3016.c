#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct record
{
	int score;
	int rank;
}Record;
typedef struct student
{
	char name[10];
	Record sub[3];
}Student;
int main(void)
{
	Student s[100];
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s %d %d %d", s[i].name, &s[i].sub[0].score, &s[i].sub[1].score, &s[i].sub[2].score);
		for (j = 0; j < 3; j++)
			s[i].sub[j].rank = 1;
	}

	for (i = 0; i < n; i++) {//1과목 등수
		for (j = 0; j < n; j++)
			if (s[i].sub[0].score < s[j].sub[0].score)
				s[i].sub[0].rank++;
	}

	for (i = 0; i < n; i++) {//2과목 등수
		for (j = 0; j < n; j++)
			if (s[i].sub[1].score < s[j].sub[1].score)
				s[i].sub[1].rank++;
	}

	for (i = 0; i < n; i++) {//3과목 등수
		for (j = 0; j < n; j++)
			if (s[i].sub[2].score < s[j].sub[2].score)
				s[i].sub[2].rank++;
	}

	for (i = 0; i < n; i++)
		if (s[i].sub[0].rank == 1)
			printf("%s %d %d\n", s[i].name, s[i].sub[1].rank, s[i].sub[2].rank);
}
