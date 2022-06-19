#include "../DataStructuresProject.h"

int StaticAndGlobal(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return StaticAndGlobal(n - 1) + x;
    }
    return 0;
}

//int main()
//{
//    int r;
//    r = StaticAndGlobal(5);
//    printf("%d\n", r);
//
//    r = StaticAndGlobal(5);
//    printf("%d\n", r);
//    return 0;
//}