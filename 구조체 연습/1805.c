#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct gas
{
	int id;
	int amount;
}Gas;
int main(void)
{
	int n, i, j;
	Gas tmp;
	Gas s[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d %d", &s[i].id, &s[i].amount);

	for(i = 0; i < n; i++)
		for(j = i + 1; j < n; j++)
			if (s[j].id < s[i].id)
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}

	for (i = 0; i < n; i++)
		printf("%d %d\n", s[i].id, s[i].amount);
}
