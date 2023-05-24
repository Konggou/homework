#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define lenth 4

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Init(int a[][lenth])
{
	int count = 1;
	for (int k = 0; k < lenth; k++)
	{
		for (int m = 0; m < lenth; m++)
		{
			a[k][m] = count;
			count++;
		}
	}
}

void Print(int a[][lenth])
{
	for (int k = 0; k < lenth; k++)
	{
		for (int m = 0; m < lenth; m++)
		{
			printf("%d\t", a[k][m]);
		}
		printf("\n");
	}
}

int main()
{
	int a[lenth][lenth];
	int n = lenth - 1;
	Init(a);
	Print(a);
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = i; j <= n - 1-i; j++)
		{
			Swap(&a[i][j], &a[j][n - i]);
			Swap(&a[n - i][n - j], &a[n - j][i]);
			Swap(&a[i][j], &a[n - i][n - j]);
		}
	}
	printf("\n");
	Print(a);
}