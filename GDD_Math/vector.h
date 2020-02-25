///
///  GDD Math is a C++ Math library written specifically for
///  the visual representation of Matrix Math used within the
///  Game Design and Development program
///
/// Program Description : Vector definition - contains definitions for vectors 2, 3, and 4
/// Created By : Benjamin Kleynhans
/// Creation Date : February 16, 2020
/// Authors : Benjamin Kleynhans
///
/// Last Modified By : Benjamin Kleynhans
/// Last Modified Date : February 24, 2020
/// Filename : vector.h
///

// Define the 4 variables to be used in the vectors
typedef float x_t;
typedef float y_t;
typedef float z_t;
typedef float w_t;

// Vector2 definition
#ifndef _VECTOR2_
#define _VECTOR2_

struct vector2
{
    x_t x;
    y_t y;
};

#endif // _VECTOR2_

// Vector3 definition
#ifndef _VECTOR3_
#define _VECTOR3_

struct vector3
{
    x_t x;
    y_t y;
    z_t z;
};

#endif // _VECTOR3_

// Vector4 definition
#ifndef _VECTOR4_
#define _VECTOR4_

struct vector4
{
    x_t x;
    y_t y;
    z_t z;
    w_t w;
};

#endif // _VECTOR4_