#ifndef _GDD_MATH_H_
#define _GDD_MATH_H_

#include "pch.h"
#include <iostream>
#include <string>

#include "vector.h"
#include "matrix.h"

class GDD_Math
{
public:
    // Constructors
    GDD_Math();
    ~GDD_Math();

    matrix2x2* matMul(matrix2x2*, matrix2x2*);
    matrix2x3* matMul(matrix2x2*, matrix2x3*);
    matrix2x4* matMul(matrix2x2*, matrix2x4*);

    matrix2x2* matMul(matrix2x3*, matrix3x2*);
    matrix2x3* matMul(matrix2x3*, matrix3x3*);
    matrix2x4* matMul(matrix2x3*, matrix3x4*);

    matrix2x2* matMul(matrix2x4*, matrix4x2*);
    matrix2x3* matMul(matrix2x4*, matrix4x3*);
    matrix2x4* matMul(matrix2x4*, matrix4x4*);

    matrix3x2* matMul(matrix3x2*, matrix2x2*);
    matrix3x3* matMul(matrix3x2*, matrix2x3*);
    matrix3x4* matMul(matrix3x2*, matrix2x4*);

    matrix3x2* matMul(matrix3x3*, matrix3x2*);
    matrix3x3* matMul(matrix3x3*, matrix3x3*);
    matrix3x4* matMul(matrix3x3*, matrix3x4*);

    matrix3x2* matMul(matrix3x4*, matrix4x2*);
    matrix3x3* matMul(matrix3x4*, matrix4x3*);
    matrix3x4* matMul(matrix3x4*, matrix4x4*);

    matrix4x2* matMul(matrix4x2*, matrix2x2*);
    matrix4x3* matMul(matrix4x2*, matrix2x3*);
    matrix4x4* matMul(matrix4x2*, matrix2x4*);

    matrix4x2* matMul(matrix4x3*, matrix3x2*);
    matrix4x3* matMul(matrix4x3*, matrix3x3*);
    matrix4x4* matMul(matrix4x3*, matrix3x4*);

    matrix4x2* matMul(matrix4x4*, matrix4x2*);
    matrix4x3* matMul(matrix4x4*, matrix4x3*);
    matrix4x4* matMul(matrix4x4*, matrix4x4*);   

private:

};

#endif //_GDD_MATH_H_