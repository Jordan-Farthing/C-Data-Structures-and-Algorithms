#include "../DataStructuresProject.h"


void Set(struct LowerTriangularMatrix* m, int i, int j, int x)
{
	if (i >= j)
	{
		//row major representation
		//m->A[i * (i - 1) / 2 + j - 1] = x;

		//column major representation
		m->A[m->n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] = x;
	}

}

int Get(struct LowerTriangularMatrix* m, int i, int j)
{
	if (i >= j)
	{
		//row major representation
		//return m->A[i * (i - 1) / 2 + j - 1];

		//column major representation
		return m->A[m->n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j];
	}
	else
		return 0;
}
void Display(struct LowerTriangularMatrix m)
{
	int i, j;
	for (i = 1; i <= m.n; i++)
	{
		for (j = 1; j <= m.n; j++)
		{
			if (i >= j)
			{
				//row major representation
				//printf("%d ", m.A[i * (i - 1) / 2 + j - 1]);

				//column major representation
				printf("%d ", m.A[m.n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j]);
			}
			else
				printf("0 ");
		}
		printf("\n");
	}
}
//int main()
//{
//	struct LowerTriangularMatrix m;
//	int i, j, x;
//	printf("Enter Dimension ");
//	scanf_s("%d", &m.n);
//	m.A = (int*)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
//	printf("enter all elements");
//	for (i = 1; i <= m.n; i++)
//	{
//		for (j = 1; j <= m.n; j++)
//		{
//			scanf_s("%d", &x);
//			Set(&m, i, j, x);
//		}
//	}
//	printf("\n\n");
//	Display(m);
//	return 0;
//}