#include "../DataStructuresProject.h"

//also called e^x on calculator
double TaylorRecursion(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = TaylorRecursion(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;

}

double TaylorImprovedRecursion(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return TaylorImprovedRecursion(x, n - 1);
}

double TaylorIterative(int x, int n)
{
    double s = 1;
    double num = 1;
    double den = 1;
    for (int i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}

//int main()
//{
//    printf("%lf \n", TaylorRecursion(1, 10));
//    return 0;
//}