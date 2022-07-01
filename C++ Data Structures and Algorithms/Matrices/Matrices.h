#include <iostream>
using namespace std;
#pragma once
struct Matrix
{
	int A[10];
	int n;

};

void Set(struct Matrix* m, int i, int j, int x);
int Get(struct Matrix m, int i, int j);
void Display(struct Matrix m);


class Diagonal
{
private:
	int* A;
	int n;
public:
	Diagonal()
	{
		n = 2;
		A = new int[2];
	}
	Diagonal(int n)
	{
		this->n = n;
		A = new int[n];
	}
	~Diagonal()
	{
		delete[]A;
	}

	void Set(int i, int j, int x);
	int Get(int i, int j);
	void Display();
};

struct LowerTriangularMatrix
{
	int* A;
	int n;

};

void Set(struct LowerTriangularMatrix* m, int i, int j, int x);
int Get(struct LowerTriangularMatrix* m, int i, int j);
void Display(struct LowerTriangularMatrix m);


class LowerTriangularMatrixClass
{
private:
	int* A;
	int n;
public:
	LowerTriangularMatrixClass()
	{
		n = 2;
		A = new int[2*(2+1)/2];
	}
	LowerTriangularMatrixClass(int n)
	{
		this->n = n;
		A = new int[n*(n+1)/2];
	}
	~LowerTriangularMatrixClass()
	{
		delete[]A;
	}

	void Set(int i, int j, int x);
	int Get(int i, int j);
	void Display();
	int GetDimension() { return n; };

};


//Sparse Matrix
struct Element
{
	int i;
	int j;
	int x;
};
struct Sparse
{
	int m;
	int n;
	int num;
	struct Element* ele;
};

void create(struct  Sparse* s);
void display(struct Sparse s);
struct Sparse* add(struct Sparse* s1, struct Sparse* s2);

//Sparse Matrix Class
class ElementClass
{
public:
	int i;
	int j;
	int x;
};
class SparseClass
{
private:
	int m;
	int n;
	int num;
	ElementClass* ele;
public:
	SparseClass(int m, int n, int num)
	{
		this->m = m;
		this->n = n;
		this->num = num;
		ele = new ElementClass[this->num];
	}
	~SparseClass()
	{
		delete[] ele;
	}

	SparseClass operator+(SparseClass& s);
	friend istream& operator>>(istream& is, SparseClass& s);
	friend ostream& operator<<(ostream& os, SparseClass& s);
};

