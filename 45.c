#include<stdio.h>
int main()
{
	void boss(int *a, int k, int x);
	int n, i, k = 0, a[11];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	boss(a, k, n - 1);
	return 0;
}
void boss(int *a, int k, int x)
{
	int i, c, b[11], n, j;

	if (x == k)
	{
		for (i = 0; i <= x; i++)
			printf("%d ", a[i]);
		printf("\n");
	}
	else
		for (i = k; i <= x; i++)
		{
			c = a[k];
			a[k] = a[i];
			a[i] = c;
			for (j = i; j > k + 1; j--)
			{
				c = a[j];
				a[j] = a[j - 1];
				a[j - 1] = c;
			}
			boss(a, k + 1, x);
			for (j = k + 1; j < i; j++)
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
			c = a[k];
			a[k] = a[i];
			a[i] = c;
		}
}
 