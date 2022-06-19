#include "../DataStructuresProject.h"

int SumOfNumRecursion(int n)
{
    if (n == 0)
        return 0;
    return SumOfNumRecursion(n - 1) + n;
}

//int main()
//{
//    int r;
//    r = SumOfNumRecursion(5);
//    printf("%d\n", r);
//    return 0;
//}