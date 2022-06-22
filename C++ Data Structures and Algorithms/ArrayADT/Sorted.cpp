#include "../DataStructuresProject.h"

void InsertSort(struct Array* arr, int x)
{
	int i = arr->length - 1;
	if (arr->length == arr->size)
		return;
	while (i >= 0 && arr->A[i] > x)
	{
		arr->A[i + 1] = arr->A[i];
		i--;
	}
	arr->A[i + 1] = x;
	arr->length++;
}

int IsSorted(struct Array arr)
{
	for (int i = 0; i < arr.length - 1; i++)
	{
		if (arr.A[i] > arr.A[i + 1])
			return 0;
	}
	return 1;
}

void Rearrange(struct Array* arr)
{
	int i, j;
	i = 0;
	j = arr->length - 1;
	while (i < j)
	{
		while (arr->A[i] < 0) i++;
		while (arr->A[j] >= 0) j--;
		if (i < j)swap(&arr->A[i], &arr->A[j]);
	}
}

//int main()
//{
//	struct Array arr = { {2,-3,5,10,-15, -7},10,6 };
//	Rearrange(&arr);
//	//InsertSort(&arr, 25);
//	//printf("%d\n",IsSorted(arr));
//	Display(arr);
//
//	return 0;
//}