#include "../DataStructuresProject.h"

int Delete(struct Array* arr, int index)
{
	int x = 0;

	if (index >= 0 && index < arr->length)
	{
		x = arr->A[index];
		for (int i = index; i < arr->length - 1; i++)
			arr->A[i] = arr->A[i + 1];
		arr->length--;
		return x;
	}
	return 0;
}


//int main()
//{
//	struct Array arr = { {2,3,4,5,6},10,5 };
//	printf("%d\n", Delete(&arr, 0));
//	Display(arr);
//
//	return 0;
//}