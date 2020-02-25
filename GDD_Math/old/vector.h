// Defining vectors

typedef float x_t;
typedef float y_t;
typedef float z_t;
typedef float w_t;

#ifndef _VECTOR2_
#define _VECTOR2_

struct vector2
{
    x_t x;
    y_t y;
};

#endif // _VECTOR2_

#ifndef _VECTOR3_
#define _VECTOR3_

struct vector3
{
    x_t x;
    y_t y;
    z_t z;
};

#endif // _VECTOR3_

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