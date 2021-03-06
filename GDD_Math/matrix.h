///
///  GDD Math is a C++ Math library written specifically for
///  the visual representation of Matrix Math used within the
///  Game Design and Development program
///
/// Program Description : Matrix definitions - contains definitions for Matrices
///         2x2, 3x3, and 4x4
/// Created By : Benjamin Kleynhans
/// Creation Date : February 16, 2020
/// Authors : Benjamin Kleynhans
///
/// Last Modified By : Benjamin Kleynhans
/// Last Modified Date : February 24, 2020
/// Filename : vector.h
///

// Import the vector definition file
#include "vector.h"

// Matrix 2x2 definition
#ifndef _MATRIX2X2_
#define _MATRIX2X2_

struct matrix2x2
{
    vector2 a;
    vector2 b;
};

#endif // _MATRIX2X2_

// Matrix 2x3 definition - NOT IMPLEMENTED
#ifndef _MATRIX2X3_
#define _MATRIX2X3_

struct matrix2x3
{
    vector3 a;
    vector3 b;
};

#endif // _MATRIX2X3_

// Matrix 2x4 definition - NOT IMPLEMENTED
#ifndef _MATRIX2X4_
#define _MATRIX2X4_

struct matrix2x4
{
    vector4 a;
    vector4 b;
};

#endif // _MATRIX2X4_

// Matrix 3x2 definition - NOT IMPLEMENTED
#ifndef _MATRIX3X2_
#define _MATRIX3X2_

struct matrix3x2
{
    vector2 a;
    vector2 b;
    vector2 c;
};

#endif // _MATRIX3X2_

// Matrix 3x3 definition
#ifndef _MATRIX3X3_
#define _MATRIX3X3_

struct matrix3x3
{
    vector3 a;
    vector3 b;
    vector3 c;
};

#endif // _MATRIX3X3_

// Matrix 3x4 definition - NOT IMPLEMENTED
#ifndef _MATRIX3X4_
#define _MATRIX3X4_

struct matrix3x4
{
    vector4 a;
    vector4 b;
    vector4 c;
};

#endif // _MATRIX3X4_

// Matrix 4x2 definition - NOT IMPLEMENTED
#ifndef _MATRIX4X2_
#define _MATRIX4X2_

struct matrix4x2
{
    vector2 a;
    vector2 b;
    vector2 c;
    vector2 d;
};

#endif // _MATRIX4X2_

// Matrix 4x3 definition - NOT IMPLEMENTED
#ifndef _MATRIX4X3_
#define _MATRIX4X3_

struct matrix4x3
{
    vector3 a;
    vector3 b;
    vector3 c;
    vector3 d;
};

#endif // _MATRIX4X3_

// Matrix 4x4 definition
#ifndef _MATRIX4X4_
#define _MATRIX4X4_

struct matrix4x4
{
    vector4 a;
    vector4 b;
    vector4 c;
    vector4 d;
};

#endif // _MATRIX4X4_