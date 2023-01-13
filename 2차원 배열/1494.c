#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t[101] = { 0 };
    int size, course;
    int s, e, u, i, sum = 0;
    
    scanf("%d %d", &size, &course);
    for (i = 1; i <= course; i++) {
        scanf("%d %d %d", &s, &e, &u);
        t[s] = t[s] + u;
        t[e + 1] = t[e + 1] - u;
    }

    for (i = 1; i <= size; i++)
        printf("%d ", t[i]);
    printf("\n");

    for (i = 1; i <= size; i++) {
        sum += t[i];
        printf("%d ", sum);
    }
}
