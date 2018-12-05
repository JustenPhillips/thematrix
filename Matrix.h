// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: The Matrix

#pragma once

#include <iostream>

/*
A matrix is a two dimensional array. In mathematics, a matrix (plural matrices) is a 
rectangular array[1] of numbers, symbols, or expressions, arranged in rows and 
columns.[2][3] The dimensions of matrix (1) are 2 × 3 (read "two by three"), because 
there are two rows and three columns.

A 2 by 3 matrix of integers

Matrices are very useful and represent a fundamental tool for simulating 
real-world systems.  A major branch of numerical analysis is devoted to the 
development of efficient algorithms for matrix computations, a subject that is 
centuries old and is today an expanding area of research.
*/

class Matrix
{

public:
	int _rows;
	int _cols;
	float **_array;

	Matrix();	// A constructor that creates a matrix with no rows and no column.
	Matrix(int rows, int cols); // A constructor that creates a matrix of floats with x rows and y columns.
						 // This two dimensional array should be public so it contents are accessible outside the class.
	~Matrix();

	float *setSize(int rows, int cols); // a function that will set the size of the matrix object to x rows and y column.
		                         // If the matrix already has a size, a new matrix will be allocated and 
								 // the elements of the old matrix copied to the elements of the new matrix.
		                        // The new size must be larger than the old size.The function return a pointer to element(0, 0) of the new matrix.
		                        // Any storage allocated for the old matrix should be released.
	float *getMatrix();		// return a pointer to the element at[0, 0]
	float *getRow(int row);		// a function that will return a pointer to the beginning of row x in the matrix elementx, [x, 0]
	float *getColumn(int col);	// a function that will return a pointer to the beginning of column y in the matrix element[0, y].
	float *getElement(int row, int col);
	void print();
	void init(float val = 0.0);

private:
	void _clear();

};
