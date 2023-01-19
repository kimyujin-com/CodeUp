#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student
{
	char name[10];
	int score;
}Student;
int main(void)
{
	Student s[100];
	Student rank[100];
	int n, printN;
	int i, j, maxIndex = -1;

	scanf("%d %d", &n, &printN);
	
	for (i = 0; i < n; i++)
		scanf("%s %d", s[i].name, &s[i].score);

	for (i = 0; i < n; i++){
		rank[i].score = -1;
		for (j = 0; j < n; j++)
			if (rank[i].score < s[j].score) {
				rank[i] = s[j];
				maxIndex = j;
			}
		s[maxIndex].score = -1;
	}

	for (i = 0; i < printN; i++)
		printf("%s\n", rank[i].name);
			
}
