// Write a program to find the total number of subset and proper subset of n element also specify the elements of subsets (n >8 )
#include <stdio.h>
#include <string.h>

#define N 3

void getCofactor(int A[N][N], int temp[N][N], int p, int q, int n)
{
	int i = 0, j = 0;
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (row != p && col != q)
			{
				temp[i][j++] = A[row][col];
				if (j == n - 1)
				{
					j = 0;
					i++;
				}
			}
		}
	}
}

int determinant(int A[N][N], int n)
{
	int D = 0;
	if (n == 1)
		return A[0][0];

	int temp[N][N];

	int sign = 1;
	for (int f = 0; f < n; f++)
	{
		getCofactor(A, temp, 0, f, n);
		D += sign * A[0][f] * determinant(temp, n - 1);
		sign = -sign;
	}

	return D;
}

void adjoint(int A[N][N], int adj[N][N])
{
	if (N == 1)
	{
		adj[0][0] = 1;
		return;
	}

	int sign = 1, temp[N][N];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			getCofactor(A, temp, i, j, N);
			sign = ((i + j) % 2 == 0) ? 1 : -1;
			adj[j][i] = (sign) * (determinant(temp, N - 1));
		}
	}
}

void display(int A[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}

int main()
{
	int A[N][N] = {{15, -2, 17},
				   {21, 10, 30},
				   {33, -12, -91}};

	int adj[N][N];

	printf("Input matrix is :\n");
	display(A);

	printf("\nThe Adjoint is :\n");
	adjoint(A, adj);
	display(adj);

	return 0;
}
