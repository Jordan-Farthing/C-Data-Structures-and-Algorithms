#include "../DataStructuresProject.h"

int FactorialRecursion(int n)
{
	if (n == 0)
		return 1;
	return FactorialRecursion(n - 1) * n;
}

//Iterative version for FactorialRecursion
//int Ifact(int n)
//{
//	int f = 1;
//	for (int i; i <= n; i++)
//		f *= i;
//}

//int main()
//{
//    int r;
//    r = FactorialRecursion(5);
//    printf("%d\n", r);
//    return 0;
//}