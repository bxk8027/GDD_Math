///
///  GDD Math is a C++ Math library written specifically for
///  the visual representation of Matrix Math used within the
///  Game Design and Development program
///
/// Program Description : The GDD Math file contains the actual mathematical calculations
///         used to perform dot products, matrix multiplication and cross
///         products.  All functions work with pointers so we don't have to copy
///         the vectors and matrices back and forth each time a calculation takes
///         place.
/// Created By : Benjamin Kleynhans
/// Creation Date : February 16, 2020
/// Authors : Benjamin Kleynhans
///
/// Last Modified By : Benjamin Kleynhans
/// Last Modified Date : February 24, 2020
/// Filename : gdd_math.cpp
///

#include "pch.h"
#include <string>

#include "gdd_math.h"

// Blank, default constructor
GDD_Math::GDD_Math() {}

// Blank, default destructor
// A definition for a destructor is not really required, because we don't
// allocate memory on the heap anywhere, but it is included for reference
GDD_Math::~GDD_Math() {}

// Perform matrix multiplication between two 2x2 matrices
int GDD_Math::matMul(matrix2x2* result, matrix2x2* matA, matrix2x2* matB)
{
    int returnValue = 1;

    try
    {
        // Matrix A row 1 x Matrix B column 1
        result->a.x = (matA->a.x * matB->a.x) + (matA->a.y * matB->b.x);
        result->a.y = (matA->a.x * matB->a.y) + (matA->a.y * matB->b.y);

        // Matrix A row 2 x Matrix B column 2
        result->b.x = (matA->b.x * matB->a.x) + (matA->b.y * matB->b.x);
        result->b.y = (matA->b.x * matB->a.y) + (matA->b.y * matB->b.y);
    }
    catch (int e)
    {
        returnValue = e;
    }    

    return returnValue;
}

// Perform matrix multiplication between two 3x3 matrices
int GDD_Math::matMul(matrix3x3* result, matrix3x3* matA, matrix3x3* matB)
{
    int returnValue = 1;

    try
    {
        // Matrix A row 1 x Matrix B column 1
        result->a.x = (matA->a.x * matB->a.x) + (matA->a.y * matB->b.x) + (matA->a.z * matB->c.x);
        result->a.y = (matA->a.x * matB->a.y) + (matA->a.y * matB->b.y) + (matA->a.z * matB->c.y);
        result->a.z = (matA->a.x * matB->a.z) + (matA->a.y * matB->b.z) + (matA->a.z * matB->c.z);
        // Matrix A row 2 x Matrix B column 2
        result->b.x = (matA->b.x * matB->a.x) + (matA->b.y * matB->b.x) + (matA->b.z * matB->c.x);
        result->b.y = (matA->b.x * matB->a.y) + (matA->b.y * matB->b.y) + (matA->b.z * matB->c.y);
        result->b.z = (matA->b.x * matB->a.z) + (matA->b.y * matB->b.z) + (matA->b.z * matB->c.z);
        // Matrix A row 3 x Matrix B column 3
        result->c.x = (matA->c.x * matB->a.x) + (matA->c.y * matB->b.x) + (matA->c.z * matB->c.x);
        result->c.y = (matA->c.x * matB->a.y) + (matA->c.y * matB->b.y) + (matA->c.z * matB->c.y);
        result->c.z = (matA->c.x * matB->a.z) + (matA->c.y * matB->b.z) + (matA->c.z * matB->c.z);
    }
    catch (int e)
    {
        returnValue = e;
    }

    return returnValue;
}

// Perform matrix multiplication between two 4x4 matrices
int GDD_Math::matMul(matrix4x4* result, matrix4x4* matA, matrix4x4* matB)
{
    int returnValue = 1;

    try
    {
        // Matrix A row 1 x Matrix B column 1
        result->a.x = (matA->a.x * matB->a.x) + (matA->a.y * matB->b.x) + (matA->a.z * matB->c.x) + (matA->a.w * matB->d.x);
        result->a.y = (matA->a.x * matB->a.y) + (matA->a.y * matB->b.y) + (matA->a.z * matB->c.y) + (matA->a.w * matB->d.y);
        result->a.z = (matA->a.x * matB->a.z) + (matA->a.y * matB->b.z) + (matA->a.z * matB->c.z) + (matA->a.w * matB->d.z);
        result->a.w = (matA->a.x * matB->a.w) + (matA->a.y * matB->b.w) + (matA->a.z * matB->c.w) + (matA->a.w * matB->d.w);
        // Matrix A row 2 x Matrix B column 2
        result->b.x = (matA->b.x * matB->a.x) + (matA->b.y * matB->b.x) + (matA->b.z * matB->c.x) + (matA->b.w * matB->d.x);
        result->b.y = (matA->b.x * matB->a.y) + (matA->b.y * matB->b.y) + (matA->b.z * matB->c.y) + (matA->b.w * matB->d.y);
        result->b.z = (matA->b.x * matB->a.z) + (matA->b.y * matB->b.z) + (matA->b.z * matB->c.z) + (matA->b.w * matB->d.z);
        result->b.w = (matA->b.x * matB->a.w) + (matA->b.y * matB->b.w) + (matA->b.z * matB->c.w) + (matA->b.w * matB->d.w);
        // Matrix A row 3 x Matrix B column 3
        result->c.x = (matA->c.x * matB->a.x) + (matA->c.y * matB->b.x) + (matA->c.z * matB->c.x) + (matA->c.w * matB->d.x);
        result->c.y = (matA->c.x * matB->a.y) + (matA->c.y * matB->b.y) + (matA->c.z * matB->c.y) + (matA->c.w * matB->d.y);
        result->c.z = (matA->c.x * matB->a.z) + (matA->c.y * matB->b.z) + (matA->c.z * matB->c.z) + (matA->c.w * matB->d.z);
        result->c.w = (matA->c.x * matB->a.w) + (matA->c.y * matB->b.w) + (matA->c.z * matB->c.w) + (matA->c.w * matB->d.w);
        // Matrix A row 4 x Matrix B column 4
        result->d.x = (matA->d.x * matB->a.x) + (matA->d.y * matB->b.x) + (matA->d.z * matB->c.x) + (matA->d.w * matB->d.x);
        result->d.y = (matA->d.x * matB->a.y) + (matA->d.y * matB->b.y) + (matA->d.z * matB->c.y) + (matA->d.w * matB->d.y);
        result->d.z = (matA->d.x * matB->a.z) + (matA->d.y * matB->b.z) + (matA->d.z * matB->c.z) + (matA->d.w * matB->d.z);
        result->d.w = (matA->d.x * matB->a.w) + (matA->d.y * matB->b.w) + (matA->d.z * matB->c.w) + (matA->d.w * matB->d.w);
    }
    catch (int e)
    {
        returnValue = e;
    }

    return returnValue;
}

// Calculate the Dot product for two vector 2s
float GDD_Math::vecDot(vector2* vec2A, vector2* vec2B)
{
    float returnValue = NULL;

    returnValue += (vec2A->x * vec2B->x);
    returnValue += (vec2A->y * vec2B->y);

    return returnValue;
}

// Calculate the Dot product for two vector 3s
float GDD_Math::vecDot(vector3* vec3A, vector3* vec3B)
{
    float returnValue = NULL;

    returnValue += (vec3A->x * vec3B->x);
    returnValue += (vec3A->y * vec3B->y);
    returnValue += (vec3A->z * vec3B->z);

    return returnValue;
}

// Calculate the Dot product for two vector 4s
float GDD_Math::vecDot(vector4* vec4A, vector4* vec4B)
{
    float returnValue = NULL;

    returnValue += (vec4A->x * vec4B->x);
    returnValue += (vec4A->y * vec4B->y);
    returnValue += (vec4A->z * vec4B->z);
    returnValue += (vec4A->w * vec4B->w);

    return returnValue;
}

// Calculate the Cross product between two vector 3s
int GDD_Math::vecCross(vector3* result, vector3* vecA, vector3* vecB)
{
    int returnValue = 1;

    try
    {
        // Matrix A row 1 x Matrix B column 1
        result->x = (vecA->y * vecB->z) - (vecA->z * vecB->y);
        result->y = (vecA->z * vecB->x) - (vecA->x * vecB->z);
        result->z = (vecA->x * vecB->y) - (vecA->y * vecB->x);
    }
    catch (int e)
    {
        returnValue = e;
    }

    return returnValue;
}
