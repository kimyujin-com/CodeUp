#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct memory
{
	char name[101];
	int sum;
}Memory;

int main(void)
{
	int i, j;
	int inputN, outputN;
	Memory m[100001];
	char word[101];
	int num, flag = 1, flag2 = 1, cnt = 0;
	int ans[100001];

	scanf("%d %d", &inputN, &outputN);
	for (i = 0; i < inputN; i++){
		scanf("%s %d", word, &num);
		flag = 1;
		for (j = 0; j < cnt; j++)
			if (strcmp(m[j].name, word) == 0) {
				m[j].sum += num;
				flag = 0;
				break;
			}
		if (flag) {
			strcpy(m[cnt].name, word);
			m[cnt].sum = num;
			cnt++;
		}
	}
	for (i = 0; i < outputN; i++) {
		scanf("%s", word);
		flag2 = 1;
		for (j = 0; j < cnt; j++)
			if (strcmp(word, m[j].name) == 0) {
				ans[i] = m[j].sum;
				flag2 = 0;
				break;
			}
		if (flag2)
			ans[i] = 0;
	}

	for(i = 0; i < outputN; i++)
		printf("%d\n", ans[i]);
}
