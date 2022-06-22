#include "../DataStructuresProject.h"


void Display(struct ArrayDynamic arr)
{
	printf("Elements are\n");
	for (int i = 0; i < arr.length; i++)
		printf("%d ", arr.A[i]);
	printf("\n");
}

//int main()
//{
//	struct ArrayDynamic arr;
//	int n, i;
//	printf("Enter size of an array");
//	scanf_s("%d", &arr.size);
//
//	arr.A = (int*)malloc(arr.size * sizeof(int));
//	arr.length = 0;
//
//	printf("Enter number of numbers");
//	scanf_s("%d", &n);
//
//	printf("Enter all Elements\n");
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &arr.A[i]);
//	arr.length = n;
//
//	Display(arr);
//	return 0;
//}