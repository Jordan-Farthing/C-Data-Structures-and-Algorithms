#include "../DataStructuresProject.h"

int Fibonacci(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1) return n;

    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int FibonacciRecursion(int n)
{
    if (n <= 1) return n;
    return FibonacciRecursion(n - 2) + FibonacciRecursion(n - 1);
}
//memorization Fibonacci Recursion
int F[10];

int MemFibonacciRecursion(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = MemFibonacciRecursion(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = MemFibonacciRecursion(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}

//extern int F[10];
// 
//int main()
//{
//    for (int i = 0; i < 10; i++)
//        F[i] = -1;
//
//    printf("%d \n", MemFibonacciRecursion(6));
//    return 0;
//}