#include "../DataStructuresProject.h"

int NestedRecursion(int n)
{
    if (n > 100)
        return n - 10;
    return NestedRecursion(NestedRecursion(n + 11));
}
//int main()
//{
//    int r;
//    r = NestedRecursion(95);
//    printf("%d\n", r);
//    return 0;
//}