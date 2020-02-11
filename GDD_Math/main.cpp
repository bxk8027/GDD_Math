#include "pch.h"
#include <iostream>
#include "vector2.h"
#include "vector3.h"
#include "vector4.h"
#include "matrix2.h"
#include "matrix3.h"

int main()
{
    Vector2 myVec2(0.0f, 0.0f);

    Vector3 myVec3(0.0f, 0.0f, 0.0f);

    float twoByTwoMatrix[2][2] = { 
        {0.0f, 0.0f}, 
        {0.0f, 0.0f}
    };

    float threeByThreeMatrix[3][3] = {
        {0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f}
    };

    //Vector2 myVec2(3.0f, 7.0f);

    Matrix2 myMat1(twoByTwoMatrix);
    Matrix2 myMat2(twoByTwoMatrix);

    myMat1.MatMul()


    return 0;
}