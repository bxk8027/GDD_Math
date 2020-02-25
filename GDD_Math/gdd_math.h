///
///  GDD Math is a C++ Math library written specifically for
///  the visual representation of Matrix Math used within the
///  Game Design and Development program
///
/// Program Description : GDD Math definition header file
/// Created By : Benjamin Kleynhans
/// Creation Date : February 16, 2020
/// Authors : Benjamin Kleynhans
///
/// Last Modified By : Benjamin Kleynhans
/// Last Modified Date : February 24, 2020
/// Filename : gdd_math.h
///

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
    
    int matMul(matrix2x2*, matrix2x2*, matrix2x2*);
    int matMul(matrix3x3*, matrix3x3*, matrix3x3*);
    int matMul(matrix4x4*, matrix4x4*, matrix4x4*);

    float vecDot(vector2*, vector2*);
    float vecDot(vector3*, vector3*);
    float vecDot(vector4*, vector4*);

    int vecCross(vector3*, vector3*, vector3*);

};

#endif //_GDD_MATH_H_