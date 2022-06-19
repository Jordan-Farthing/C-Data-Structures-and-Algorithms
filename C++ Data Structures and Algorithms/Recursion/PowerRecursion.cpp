#include "../DataStructuresProject.h"

int PowerRecursion(int m, int n)
{
    if (n == 0)
        return 1;
    return PowerRecursion(m, n - 1) * m;
}

int PowerRecursionImproved(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return PowerRecursionImproved(m * m, n / 2);
    return m * PowerRecursionImproved(m * m, (n - 1) / 2);
}

//int main()
//{
//    int r;
//    r = PowerRecursionImproved(2, 9);
//    printf("%d\n", r);
//    return 0;
//}