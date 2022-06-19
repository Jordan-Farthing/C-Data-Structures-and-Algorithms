#include "../DataStructuresProject.h"

void BasicRecursion(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        BasicRecursion(n - 1);
    }
}

//int main()
//{
//
//    int x = 3;
//
//    fun(x);
//
//    return 0;
//}