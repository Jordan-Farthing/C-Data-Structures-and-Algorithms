#include "../DataStructuresProject.h"

int nCr(int n, int r)
{
	int num, den;
	num = FactorialRecursion(n);
	den = FactorialRecursion(r) * FactorialRecursion(n - r);

	return num / den;;
}

int NCRRecursion(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	return NCRRecursion(n - 1, r - 1) + NCRRecursion(n - 1, r);
}

//int main()
//{
//	printf("%d \n", NCRRecursion(4, 2));
//	return 0;
//}