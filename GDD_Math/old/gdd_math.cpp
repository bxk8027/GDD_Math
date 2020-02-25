#include "pch.h"
#include <string>

#include "gdd_math.h"

GDD_Math::GDD_Math() {}

GDD_Math::~GDD_Math() {}

matrix2x2* GDD_Math::matMul(matrix2x2* matA, matrix2x2* matB)
{
    matrix2x2 tempMatrix;

    // Matrix A row 1 x Matrix B column 1
    tempMatrix.a.x = (matA->a.x * matB->a.x) + (matA->a.y * matB->b.x);
    tempMatrix.a.y = (matA->a.x * matB->a.y) + (matA->a.y * matB->b.y);

    // Matrix A row 2 x Matrix B column 2
    tempMatrix.b.x = (matA->b.x * matB->a.x) + (matA->b.y * matB->b.x);
    tempMatrix.b.y = (matA->b.x * matB->a.y) + (matA->b.y * matB->b.y);

    return &tempMatrix;
}

matrix2x3* GDD_Math::matMul(matrix2x2*, matrix2x3*)
{
    return nullptr;
}

matrix2x4* GDD_Math::matMul(matrix2x2*, matrix2x4*)
{
    return nullptr;
}

matrix2x2* GDD_Math::matMul(matrix2x3*, matrix3x2*)
{
    return nullptr;
}

matrix2x3* GDD_Math::matMul(matrix2x3*, matrix3x3*)
{
    return nullptr;
}

matrix2x4* GDD_Math::matMul(matrix2x3*, matrix3x4*)
{
    return nullptr;
}

matrix2x2* GDD_Math::matMul(matrix2x4*, matrix4x2*)
{
    return nullptr;
}

matrix2x3* GDD_Math::matMul(matrix2x4*, matrix4x3*)
{
    return nullptr;
}

matrix2x4* GDD_Math::matMul(matrix2x4*, matrix4x4*)
{
    return nullptr;
}

matrix3x2* GDD_Math::matMul(matrix3x2*, matrix2x2*)
{
    return nullptr;
}

matrix3x3* GDD_Math::matMul(matrix3x2*, matrix2x3*)
{
    return nullptr;
}

matrix3x4* GDD_Math::matMul(matrix3x2*, matrix2x4*)
{
    return nullptr;
}

matrix3x2* GDD_Math::matMul(matrix3x3*, matrix3x2*)
{
    return nullptr;
}

matrix3x3* GDD_Math::matMul(matrix3x3* matA, matrix3x3* matB)
{
    matrix3x3 tempMatrix;

    // Matrix A row 1 x Matrix B column 1
    tempMatrix.a.x = (matA->a.x * matB->a.x) + (matA->a.y * matB->b.x) + (matA->a.z * matB->c.x);
    tempMatrix.a.y = (matA->a.x * matB->a.y) + (matA->a.y * matB->b.y) + (matA->a.z * matB->c.y);
    tempMatrix.a.z = (matA->a.x * matB->a.z) + (matA->a.y * matB->b.z) + (matA->a.z * matB->c.z);
    // Matrix A row 2 x Matrix B column 2
    tempMatrix.b.x = (matA->b.x * matB->a.x) + (matA->b.y * matB->b.x) + (matA->b.z * matB->c.x);
    tempMatrix.b.y = (matA->b.x * matB->a.y) + (matA->b.y * matB->b.y) + (matA->b.z * matB->c.y);
    tempMatrix.b.z = (matA->b.x * matB->a.z) + (matA->b.y * matB->b.z) + (matA->b.z * matB->c.z);
    // Matrix A row 3 x Matrix B column 3
    tempMatrix.c.x = (matA->c.x * matB->a.x) + (matA->c.y * matB->b.x) + (matA->c.z * matB->c.x);
    tempMatrix.c.y = (matA->c.x * matB->a.y) + (matA->c.y * matB->b.y) + (matA->c.z * matB->c.y);
    tempMatrix.c.z = (matA->c.x * matB->a.z) + (matA->c.y * matB->b.z) + (matA->c.z * matB->c.z);

    return &tempMatrix;
}

matrix3x4* GDD_Math::matMul(matrix3x3*, matrix3x4*)
{
    return nullptr;
}

matrix3x2* GDD_Math::matMul(matrix3x4*, matrix4x2*)
{
    return nullptr;
}

matrix3x3* GDD_Math::matMul(matrix3x4*, matrix4x3*)
{
    return nullptr;
}

matrix3x4* GDD_Math::matMul(matrix3x4*, matrix4x4*)
{
    return nullptr;
}

matrix4x2* GDD_Math::matMul(matrix4x2*, matrix2x2*)
{
    return nullptr;
}

matrix4x3* GDD_Math::matMul(matrix4x2*, matrix2x3*)
{
    return nullptr;
}

matrix4x4* GDD_Math::matMul(matrix4x2*, matrix2x4*)
{
    return nullptr;
}

matrix4x2* GDD_Math::matMul(matrix4x3*, matrix3x2*)
{
    return nullptr;
}

matrix4x3* GDD_Math::matMul(matrix4x3*, matrix3x3*)
{
    return nullptr;
}

matrix4x4* GDD_Math::matMul(matrix4x3*, matrix3x4*)
{
    return nullptr;
}

matrix4x2* GDD_Math::matMul(matrix4x4*, matrix4x2*)
{
    return nullptr;
}

matrix4x3* GDD_Math::matMul(matrix4x4*, matrix4x3*)
{
    return nullptr;
}

matrix4x4* GDD_Math::matMul(matrix4x4*, matrix4x4*)
{
    return nullptr;
}