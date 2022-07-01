#include "DataStructuresProject.h"

using namespace std;

int main()
{
	struct Poly p1, p2, * p3;

	create(&p1);
	create(&p2);

	p3 = add(&p1, &p2);

	printf("\n");
	display(p1);
	printf("\n");
	display(p2);
	printf("\n");
	display(*p3);


	return 0;
}