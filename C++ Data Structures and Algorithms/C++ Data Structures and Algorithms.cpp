#include "DataStructuresProject.h"
using namespace std;

int main()
{
    int r;
    r = StaticAndGlobal(5);
    printf("%d\n", r);

    r = StaticAndGlobal(5);
    printf("%d\n", r);
    return 0;
}

