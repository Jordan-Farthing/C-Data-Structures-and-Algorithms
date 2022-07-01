#include "../DataStructuresProject.h"
using namespace std;

void LowerTriangularMatrixClass::Set(int i, int j, int x)
{
	if (i >= j)
	{
		//row major
		//A[i * (i - 1) / 2 + j - 1] = x;

		//column major
		A[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] = x;
	}
}

int LowerTriangularMatrixClass::Get(int i, int j)
{
	if (i == j)
	{
		//row major
		//return A[i * (i - 1) / 2 + j - 1];

		//column major
		A[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j];
	}
	return 0;

}

void LowerTriangularMatrixClass::Display()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i >= j)
			{
				//row major
				//cout << A[i * (i - 1) / 2 + j - 1] << " ";
				
				//column major
				cout << A[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] << " ";
			}
			else
				cout << "0 ";
		}
		cout << endl;
	}
}

//int main()
//{
//	int d;
//	cout << "Enter Dimensions";
//	cin >> d;
//
//	LowerTriangularMatrixClass lm(d);
//
//	int x;
//	cout << "Enter All Elements";
//	for (int i = 1; i <= d; i++)
//	{
//		for (int j = 1; j <= d; j++)
//		{
//			cin >> x;
//			lm.Set(i, j, x);
//		}
//	}
//
//	lm.Display();
//
//	return 0;
//}