#include "../DataStructuresProject.h"

void IndirectRecursionA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        IndirectRecursionB(n - 1);
    }
}

void IndirectRecursionB(int n)
{
    if (n > 1)
    {
        printf("%d ", n);
        IndirectRecursionA(n / 2);
    }
}

//int main()
//{
//    IndirectRecursionA(20);
//    return 0;
//}