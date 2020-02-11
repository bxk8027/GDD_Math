#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix
{
public:
    float** matrix;

    // Default constructor
    Matrix();
    // Create a matrix with x rows and y columns
    Matrix(int x, int y);
    // Destructor
    ~Matrix();

    // alloc method -> creates the actual matrix based on the parameters provided by the constructors
    float** alloc(int x, int y);
    // dealloc method -> cleares/releases memory no longer in use
    void dealloc();
    // setSize method -> resizes the matrix and returns pointer to new array at array[0, 0]
    float** setSize(int x, int y);
    // getMatrix method -> returns pointer to address of beginning of array at array[0, 0]
    float* getMatrix();
    // getRow method -> returns pointer to address of beginning of row at array[x, 0]
    float* getRow(int row);
    // getColumn method -> returns pointer to address of beginning of column at array[0, y]
    float* getColumn(int col);

private:
    // matrix rows
    int x;
    // matrix columns
    int y;

};

#endif //_MATRIX_H_