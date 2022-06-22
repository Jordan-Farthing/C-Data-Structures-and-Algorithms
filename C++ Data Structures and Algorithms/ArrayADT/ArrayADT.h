#pragma once

//Depending on what main program is run in ArrayADT source files,
//uncomment this Array object when not testing source file main functions

struct Array
{
	int A[10];
	int size;
	int length;
};

//Uncomment this Array object when using Menu Program, otherwise use Array definition above

//struct Array
//{
//	int* A;
//	int size;
//	int length;
//};


struct ArrayDynamic
{
	int* A;
	int size;
	int length;
};


void Display(struct ArrayDynamic arr);
void Display(struct Array arr);
void Append(struct Array* arr, int x);
void Insert(struct Array* arr, int index, int x);
int Delete(struct Array* arr, int index);
void swap(int* x, int* y);
int LinearSearch(struct Array* arr, int key);
int BinarySearch(struct Array arr, int key);
int RecursiveBinarySearch(int a[], int l, int h, int key);
int Get(struct Array arr, int index);
void Set(struct Array* arr, int index, int x);
int Max(struct Array arr);
int Min(struct Array arr);
int Sum(struct Array arr);
float Avg(struct Array arr);
void Reverse(struct Array* arr);
void Reverse2(struct Array* arr);
void InsertSort(struct Array* arr, int x);
int IsSorted(struct Array arr);
void Rearrange(struct Array* arr);
struct Array* Merge(struct Array* arr1, struct Array* arr2);
struct Array* Union(struct Array* arr1, struct Array* arr2);
struct Array* Intersection(struct Array* arr1, struct Array* arr2);
struct Array* Difference(struct Array* arr1, struct Array* arr2);


class ArrayClass
{
private:

	int* A;
	int size;
	int length;
	void swap(int* x, int* y);
public:
	ArrayClass()
	{
		size = 10;
		length = 0;
		A = new int[size];
	}
	ArrayClass(int sz)
	{
		size = sz;
		length = 0;
		A = new int[size];
	}
	~ArrayClass()
	{
		delete A;
	}
	void Display();
	void Append(int x);
	void Insert(int index, int x);
	int Delete(int index);
	int LinearSearch(int key);
	int BinarySearch(int key);
	int Get(int index);
	void Set(int index, int x);
	int Max();
	int Min();
	int Sum();
	float Avg();
	void Reverse();
	void Reverse2();
	void InsertSort(int x);
	int IsSorted();
	void Rearrange();
	ArrayClass* Merge(ArrayClass arr2);
	ArrayClass* Union(ArrayClass arr2);
	ArrayClass* Intersection(ArrayClass arr2);
	ArrayClass* Difference(ArrayClass arr2);
};


