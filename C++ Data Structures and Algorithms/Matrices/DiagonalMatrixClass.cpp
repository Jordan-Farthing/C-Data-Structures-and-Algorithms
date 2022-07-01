#include "../DataStructuresProject.h"

using namespace std;

void Diagonal::Set(int i, int j, int x)
{
	if (i == j)
		A[i - 1] = x;
}

int Diagonal::Get(int i, int j)
{
	if (i == j)
		return A[i - 1];
	return 0;

}

void Diagonal::Display()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				cout << A[i] << " ";
			else
				cout << "0 ";
		}
		cout << endl;
	}
}

//int main()
//{
//	Diagonal d(4);
//	d.Set(1, 1, 5);
//	d.Set(2, 2, 8);
//	d.Set(3, 3, 9);
//	d.Set(4, 4, 12);
//	d.Display();
//	return 0;
//}