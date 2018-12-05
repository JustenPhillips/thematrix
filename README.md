# thematrix

TheMatrix
Requested files: Matrix.h, Matrix.cpp, Matrix_test.cpp (Download)
Type of work: Individual work

A matrix is a two dimensional array. In mathematics, a matrix (plural matrices) is a rectangular array[1] of numbers, symbols, or expressions, arranged in rows and columns.[2][3] The dimensions of matrix (1) are 2 × 3 (read "two by three"), because there are two rows and three columns.

A 2 by 3 matrix of integers

Matrices are very useful and represent a fundamental tool for simulating real-world systems.  A major branch of numerical analysis is devoted to the development of efficient algorithms for matrix computations, a subject that is centuries old and is today an expanding area of research.


Your program will implement a class that implements a matrix object that stores floats. The matrix can be of any size and will provide the following interfaces:

    Matrix() - a constructor that creates a matrix with no rows and no column.
    Matrix(x,y) - A constructor that creates a matrix of floats with x rows and y columns. This two dimensional array should be public so it contents are accessible outside the class.
    float *setSize(x,y) - a function that will set the size of the matrix object to x rows and y column. If the matrix already has a size, a new matrix will be allocated and the elements of the old matrix copied to the elements of the new matrix. The new size must be larger than the old size. The function return a pointer to element (0,0) of the new matrix. Any storage allocated for the old matrix should be released.
    float *getMatrix() - return a pointer to the element at [0,0]
    float *getRow(x) - a function that will return a pointer to the beginning of row x in the matrix elementx,[x,0]
    float *getColumn(y) - a function that will return a pointer to the beginning of column y in the matrix element[0,y].
    ~Matrix() - a destructor function that de-allocates any memory used by the matrix.


Your Matrix class should not contain a main method. The main method used to test your program should be in a file named Matrix_test.cpp. The working environment for this assignment should contain 3 files:


    Matrix.h - the interface header file where your class is defined.
    Matrix.cpp - the implementation file where your class implemented.
    Matrix_test.cpp - the test driver file that creates and tests instances of your class.

In order to assure what is called "good test coverage" your Matrix_Test driver should test the following conditions:

    Calculate the address of the first position M[0,0] in the Matrix (boundary condition)
    Calculate the address of the last position M[n,m] for an n by m matrix (boundary condition)
    Calculate the address of an entry inside the matrix M[3,4] where n > 3 and m > 4 (interior condition)
    Calculate the address of an entry outside the lower bound M[-1,-1] (out of lower bound)
    Calculate the address of an entry outside the upper bound M[n+1,m+1] (out of upper bound)

The out-of-bound values should not return a legitimate address, but a value that clearly indicates there was an error in the indices specified.

Grade
Reviewed on Saturday, 10 June 2017, 6:41 PM by Courtney Brown
Grade 90 / 100
Assessment report
Good use of the spec as the basis for your comments and code. You need to print out hex addresses however. The visual console representation is a nice touch.
