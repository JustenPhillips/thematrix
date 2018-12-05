// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: The Matrix

#include "Matrix.h"
#include <iostream>
using namespace std;
float ** _allocate(int rows, int cols)
{
	float ** a = new float *[rows];
	if (NULL == a)
		return NULL;

	for (int i = 0; i < rows; ++i)
	{
		a[i] = new float[cols];
		if (NULL == a[i])
		{
			//out of mem, clean rows allocated so far
			for (int j = 0; j < i; ++j)
				delete[] a[j];

			delete[] a;
			return NULL;
		}		
	}
	return a;
}

Matrix::Matrix() : _array(NULL)
{
}

Matrix::Matrix(int rows, int cols) // A constructor that creates a matrix of floats with x rows and y columns.
							  // This two dimensional array should be public so it contents are accessible outside the class.
{
	_array = NULL;
	_rows = 0;
	_cols = 0;
	setSize(rows, cols);
}

Matrix::~Matrix()
{
	_clear();
}

// a function that will set the size of the matrix object to x rows and y column.
// If the matrix already has a size, a new matrix will be allocated and 
// the elements of the old matrix copied to the elements of the new matrix.
// The new size must be larger than the old size.The function return a pointer to element(0, 0) of the new matrix.
// Any storage allocated for the old matrix should be released.
float* Matrix::setSize(int rows, int cols)
{
	if (rows <= 0 || cols <= 0)
		return NULL;

	if (NULL != _array)
	{
		//new size must be larger than old size if array exists
		if (rows < _rows || cols < _cols)
			return NULL;
	}
		
	//allocate new array
	float ** pNew = _allocate(rows, cols);
	if (pNew == NULL)
		return NULL;

	//copy old elements
	if (NULL != _array)
	{
		//copy old to new
		for (int i = 0; i < _rows; ++i)
			for (int j = 0; j < _cols; ++j)
				pNew[i][j] = _array[i][j];

		//cleanup old memory
		_clear();
	}
	
	_rows = rows;
	_cols = cols;
	_array = pNew;
	return &_array[0][0];
}

// return a pointer to the element at[0, 0]
float *Matrix::getMatrix()
{
	if (NULL == _array)
		return NULL;
	return &_array[0][0];
}


// a function that will return a pointer to the beginning of row x in the matrix elementx, [x, 0]
float * Matrix::getRow(int row)
{
	if (NULL == _array)
		return NULL;
	if (row < 0 || row >= _rows)
		return NULL;
	return &_array[row][0];
}

// a function that will return a pointer to the beginning of column y in the matrix element[0, y].
float *Matrix::getColumn(int col)
{
	if (NULL == _array)
		return NULL;
	if (col < 0 || col >= _cols)
		return NULL;
	return &_array[0][col];
}

float *Matrix::getElement(int row, int col)
{
	if (NULL == _array)
		return NULL;
	if (col < 0 || col >= _cols || row < 0 || row >= _rows)
		return NULL;
	return &_array[row][col];
}

void Matrix::_clear()
{
	for (int j = 0; j < _rows; ++j)
	{
		delete [] _array[j];
	}
	delete [] _array;
	_array = NULL;
	_rows = _cols = 0;	
}

void Matrix::init(float val)
{
	for (int i = 0; i < _rows; ++i)
		for (int j = 0; j < _cols; ++j)
			_array[i][j] = val;
}

void Matrix::print()
{
	cout << "*************Matrix["<< _rows<<","<<_cols<<"]*****************\n";

	for (int i = 0; i < _rows; ++i)
	{
		for (int j = 0; j < _cols; ++j)
			cout << "\t"<< _array[i][j];
		cout << endl;
	}
	cout << "*****************************************" << endl << endl;
}