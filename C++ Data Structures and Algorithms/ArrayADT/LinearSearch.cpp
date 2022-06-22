#include "../DataStructuresProject.h"

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int LinearSearch(struct Array* arr, int key)
{
	for (int i = 0; i < arr->length; i++)
	{
		if (key == arr->A[i])
		{
			//transposition
			swap(&arr->A[i], &arr->A[i - 1]);
			//move to head
			//swap(&arr->A[i], &arr->A[0]);
			return i;
		}
	}
	return -1;
}

//int main()
//{
//	struct Array arr = { {2,3,4,5,6},10,5 };
//	printf("%d\n", LinearSearch(&arr, 6));
//	Display(arr);
//
//	return 0;
//}