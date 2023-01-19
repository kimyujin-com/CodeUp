#include <stdio.h>

int n, d[110];


int f(void) {
    int i, maxIndex;

    maxIndex = 0;
    for (i = 0; i < n; i++)
        if (d[maxIndex] < d[i])
            maxIndex = i;
    return maxIndex + 1;
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}
