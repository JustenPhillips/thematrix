// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: The Matrix

#include "Matrix.h"
#include <iostream>
using namespace std;
int main()
{

	Matrix m;
	m.getMatrix();



	m.setSize(2, 3);
	int index = 0;
	for (int i = 0; i < m._rows; ++i)
		for (int j = 0; j < m._cols; ++j)
			m._array[i][j] = (float)++index;
//Calculate the address of the first position M[0,0] in the Matrix (boundary condition)

//Calculate the address of the last position M[n,m] for an n by m matrix (boundary condition)

cout <<"boundary condition:"<<endl;
	m.print();
	
//Calculate the address of an entry outside the lower bound M[-1,-1] (out of lower bound)
	cout <<"out of lower bound: Matrix[-1,-1]"<<endl;
index = 0;
	for (int i = 0; i < m._rows; ++i)
		for (int j = 0; j < m._cols; ++j)
			m._array[i][j] = (float)--index;
	m.print();
		
	

//Calculate the address of an entry outside the upper bound M[n+1,m+1] (out of upper bound)
m.setSize(2, 3);
	cout <<"out of upper bound: Matrix[n+1,m+1]"<<endl;
	index = 0;
	for (int i = 0; i < m._rows; ++i)
		for (int j = 0; j < m._cols; ++j)
			m._array[i][j] = (float)++index;
	m.setSize(3, 4);
	m.print();
	
//The out-of-bound values should not return a legitimate address, 
//but a value that clearly indicates there was an error in the indices specified.



	
    return 0;
}
