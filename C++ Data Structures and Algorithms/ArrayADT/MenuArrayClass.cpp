#include "../DataStructuresProject.h"

//int main()
//{
//	ArrayClass* arr1;
//	int ch, sz;
//	int x, index;
//	printf("Enter Size of Array ");
//	scanf_s("%d", &sz);
//	arr1 = new ArrayClass(sz);
//	do {
//		printf("Menu\n");
//		printf("1. Insert\n");
//		printf("2. Delete\n");
//		printf("3. Search\n");
//		printf("4. Sum\n");
//		printf("5. Display\n");
//		printf("6. Exit\n");
//
//		printf("enter your choice ");
//		scanf_s("%d", &ch);
//
//		switch (ch)
//		{
//		case 1: printf("Enter an element and index ");
//			scanf_s("%d%d", &x, &index);
//			arr1->Insert(index, x);
//			break;
//		case 2: printf("Enter index ");
//			scanf_s("%d", &index);
//			x = arr1->Delete(index);
//			printf("Deleted Element is %d\n", x);
//			break;
//		case 3: printf("Enter element to search ");
//			scanf_s("%d", &x);
//			index = arr1->LinearSearch(x);
//			printf("Element Index is %d \n", index);
//			break;
//		case 4: printf("Sum is %d\n", arr1->Sum());
//			break;
//		case 5:arr1->Display();
//		}
//	} while (ch < 6);
//	return 0;
//}

void ArrayClass::swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void ArrayClass::Display()
{
	int i;
	printf("\nElements are\n");
	for (i = 0; i < length; i++)
		printf("%d ", A[i]);
	printf("\n");
}

void ArrayClass::Append( int x)
{
	if (length < size)
		A[length++] = x;
}

void ArrayClass::Insert(int index, int x)
{
	if (index >= 0 && index <= length)
	{
		for (int i = length; i > index; i--)
			A[i] = A[i - 1];
		A[index] = x;
		length++;
	}
}

int ArrayClass::Delete(int index)
{
	int x = 0;

	if (index >= 0 && index < length)
	{
		x = A[index];
		for (int i = index; i < length - 1; i++)
			A[i] = A[i + 1];
		length--;
		return x;
	}
	return 0;
}

int ArrayClass::LinearSearch(int key)
{
	for (int i = 0; i < length; i++)
	{
		if (key == A[i])
		{
			//transposition
			swap(&A[i], &A[i - 1]);
			//move to head
			//swap(&arr->A[i], &arr->A[0]);
			return i;
		}
	}
	return -1;
}

int ArrayClass::BinarySearch(int key)
{
	int l, mid, h;
	l = 0;
	h = length - 1;

	while (l <= h)
	{
		mid = (l + h) / 2;
		if (key == A[mid])
			return mid;
		else if (key < A[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}

int ArrayClass::Get(int index)
{
	if (index >= 0 && index < length)
		return A[index];
	return -1;
}
void ArrayClass::Set(int index, int x)
{
	if (index >= 0 && index < length)
		A[index] = x;
}

int ArrayClass::Max()
{
	int max = A[0];
	for (int i = 1; i < length; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	return max;
}

int ArrayClass::Min()
{
	int min = A[0];
	for (int i = 1; i < length; i++)
	{
		if (A[i] < min)
			min = A[i];
	}
	return min;
}

int ArrayClass::Sum()
{
	int s = 0;
	for (int i = 0; i < length; i++)
		s += A[i];
	return s;
}

float ArrayClass::Avg()
{
	return (float)Sum() / length;
}

void ArrayClass::Reverse()
{
	int* B;
	int i, j;

	B = (int*)malloc(length * sizeof(int));

	for (i = length - 1, j = 0; i >= 0; i--, j++)
		B[j] = A[i];
	for (i = 0; i < length; i++)
		A[i] = B[i];
}

void ArrayClass::Reverse2()
{
	int i, j;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		swap(&A[i], &A[j]);
	}
}

void ArrayClass::InsertSort(int x)
{
	int i = length - 1;
	if (length == size)
		return;
	while (i >= 0 && A[i] > x)
	{
		A[i + 1] = A[i];
		i--;
	}
	A[i + 1] = x;
	length++;
}

int ArrayClass::IsSorted()
{
	for (int i = 0; i < length - 1; i++)
	{
		if (A[i] > A[i + 1])
			return 0;
	}
	return 1;
}

void ArrayClass::Rearrange()
{
	int i, j;
	i = 0;
	j = length - 1;
	while (i < j)
	{
		while (A[i] < 0) i++;
		while (A[j] >= 0) j--;
		if (i < j)swap(&A[i], &A[j]);
	}
}

//merge sorted arrays
ArrayClass* ArrayClass::Merge(ArrayClass arr2)
{
	int i, j, k;
	i = j = k = 0;
	struct ArrayClass* arr3 = new ArrayClass(length + arr2.length);
	if (arr3 != NULL)
	{
		while (i < length && j < arr2.length)
		{
			if (A[i] < arr2.A[j])
				arr3->A[k++] = A[i++];
			else
				arr3->A[k++] = A[j++];
		}

		for (; i < length; i++)
			arr3->A[k++] = A[i];
		for (; j < arr2.length; j++)
			arr3->A[k++] = arr2.A[j];

		arr3->length = length + arr2.length;
		arr3->size = 10;
	}

	return arr3;
}

ArrayClass* ArrayClass::Union(ArrayClass arr2)
{
	int i, j, k;
	i = j = k = 0;
	ArrayClass* arr3 = new ArrayClass(length + arr2.length);
	if (arr3 != NULL)
	{
		while (i < length && j < arr2.length)
		{
			if (A[i] < arr2.A[j])
				arr3->A[k++] = A[i++];
			else if (arr2.A[j] < A[i])
				arr3->A[k++] = arr2.A[j++];
			else
			{
				arr3->A[k++] = A[i++];
				j++;
			}
		}

		for (; i < length; i++)
			arr3->A[k++] = A[i];
		for (; j < arr2.length; j++)
			arr3->A[k++] = arr2.A[j];

		arr3->length = k;
		arr3->size = 10;
	}

	return arr3;
}

ArrayClass* ArrayClass::Intersection(ArrayClass arr2)
{
	int i, j, k;
	i = j = k = 0;
	struct ArrayClass* arr3 = new ArrayClass(length + arr2.length);
	if (arr3 != NULL)
	{
		while (i < length && j < arr2.length)
		{
			if (A[i] < arr2.A[j])
				i++;
			else if (arr2.A[j] < A[i])
				j++;
			else if (A[i] == arr2.A[j])
			{
				arr3->A[k++] = A[i++];
				j++;
			}
		}
		arr3->length = k;
		arr3->size = 10;
	}

	return arr3;
}

ArrayClass* ArrayClass::Difference(ArrayClass arr2)
{
	int i, j, k;
	i = j = k = 0;
	ArrayClass* arr3 = new ArrayClass(length + arr2.length);
	if (arr3 != NULL)
	{
		while (i < length && j < arr2.length)
		{
			if (A[i] < arr2.A[j])
				arr3->A[k++] = A[i++];
			else if (arr2.A[j] < A[i])
				j++;
			else
			{
				i++;
				j++;
			}
		}

		for (; i < length; i++)
			arr3->A[k++] = A[i];
		arr3->length = k;
		arr3->size = 10;
	}
	return arr3;
}