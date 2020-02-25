#include "pch.h"
#include "matrix.h"
#include <iostream>

// Default constructor
Matrix::Matrix()
{
    this->matrix = this->alloc(0, 0);
}

// Constructor
Matrix::Matrix(int rows, int cols)
{
    this->matrix = this->alloc(rows, cols);
}

void Matrix::dealloc()
{
    // iterate through the rows of the original matrix
    for (int row = 0; row < x; row++)
    {
        delete[] matrix[row];
    }

    delete[] matrix;
}

// Matrix builder
float** Matrix::alloc(int rows, int cols)
{
    this->x = rows;
    this->y = cols;

    float** new_matrix = new float* [rows];

    for (int row = 0; row < rows; row++)
    {
        new_matrix[row] = new float[cols];
    }

    return new_matrix;
}

Matrix::~Matrix()
{
    this->dealloc();
}

float** Matrix::setSize(int rows, int cols)
{
    // first check to see if rows > x and cols > y
    if (rows > this->x && cols > this->y)
    {
        float** new_matrix = this->alloc(rows, cols);

        // fill new matrix with the elements from matrix
        for (int i = 0; i < rows; i++)
        {
            new_matrix[i] = matrix[i];
        }

        // release memory for the old matrix
        this->dealloc();

        return new_matrix;
    }
    else
    {
        return matrix;
    }
}

float* Matrix::getMatrix()
{
    // create a float pointer variable
    float* start = matrix[0];

    return start;
}

float* Matrix::getRow(int row)
{
    if (row > this->x)
    {
        std::cout << "Error: the row at index " << row << " is out of bounds" << std::endl;
    }
    else    
    {
        // return a float pointer to the column header
        float* rowIndex = matrix[row];

        return rowIndex;
    }
}

float* Matrix::getColumn(int col)
{
    if (col > this->y)
    {
        std::cout << "Error: the row at index " << col << " is out of bounds" << std::endl;
    }
    else
    {
        // return a float pointer to the column header
        float* colIndex = &matrix[0][this->y];

        return colIndex;
    }
}