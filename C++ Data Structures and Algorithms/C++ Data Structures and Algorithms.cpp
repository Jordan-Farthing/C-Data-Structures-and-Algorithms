#include "DataStructuresProject.h"

using namespace std;

int main()
{
	SparseClass s1(5, 5, 5);
	SparseClass s2(5, 5, 5);

	cin >> s1;
	cin >> s2;

	SparseClass sum = s1 + s2;

	cout << "First Matrix" << endl << s1;
	cout << "Second MAtrix" << endl << s2;
	cout << "Sum Matrix" << endl << sum;

	return 0;
}