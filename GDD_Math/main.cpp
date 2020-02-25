///
///  GDD Math is a C++ Math library written specifically for
///  the visual representation of Matrix Math used within the
///  Game Design and Development program
///
/// Program Description : Main file for GDD Math - Contains tests
/// Created By : Benjamin Kleynhans
/// Creation Date : February 16, 2020
/// Authors : Benjamin Kleynhans
///
/// Last Modified By : Benjamin Kleynhans
/// Last Modified Date : February 24, 2020
/// Filename : main.cpp
///

#include "pch.h"
#include <iostream>
#include "gdd_math.h"
#include "vector.h"
#include "matrix.h"

int main()
{
    // Create and instance of the GDD_Math class
    GDD_Math calculator;

    // Create two vector 2s
    vector2 myVec2_1 = { 1.0f, 2.0f };
    vector2 myVec2_2 = { 2.0f, 3.0f };

    // Create two vector 3s
    vector3 myVec3_1 = { 1.0f, 2.0f, 3.0f };
    vector3 myVec3_2 = { 2.0f, 3.0f, 4.0f };

    // Create two vector 4s
    vector4 myVec4_1 = { 1.0f, 2.0f, 3.0f, 4.0f };
    vector4 myVec4_2 = { 2.0f, 3.0f, 4.0f, 5.0f };

    // Create two 2x2 matrices - each 2x2 matrix consists of 2x vector 2s
    matrix2x2 myMat2_1 = {
        { 1.0f, 2.0f },
        { 2.0f, 3.0f }
    };

    matrix2x2 myMat2_2 = {
        { 2.0f, 3.0f },
        { 3.0f, 4.0f }
    };

    // Create two 3x3 matrices - each 3x3 matrix consists of 3x vector 3s
    matrix3x3 myMat3_1 = {
        { 1.0f, 2.0f, 3.0f },
        { 2.0f, 3.0f, 4.0f },
        { 3.0f, 4.0f, 5.0f }
    };

    matrix3x3 myMat3_2 = {
        { 2.0f, 3.0f, 4.0f },
        { 3.0f, 4.0f, 5.0f },
        { 4.0f, 5.0f, 6.0f }
    };

    // Create two 4x4 matrices - each 4x4 matrix consists of 4x vector 4s
    matrix4x4 myMat4_1 = {
        { 1.0f, 2.0f, 3.0f, 4.0f },
        { 2.0f, 3.0f, 4.0f, 5.0f },
        { 3.0f, 4.0f, 5.0f, 6.0f },
        { 4.0f, 5.0f, 6.0f, 7.0f }
    };

    matrix4x4 myMat4_2 = {
        { 2.0f, 3.0f, 4.0f, 5.0f },
        { 3.0f, 4.0f, 5.0f, 6.0f },
        { 4.0f, 5.0f, 6.0f, 7.0f },
        { 5.0f, 6.0f, 7.0f, 8.0f }
    };

    // Calculate the dot products of the different vector types
    std::cout << calculator.vecDot(&myVec2_1, &myVec2_2) << std::endl;

    std::cout << calculator.vecDot(&myVec3_1, &myVec3_2) << std::endl;

    std::cout << calculator.vecDot(&myVec4_1, &myVec4_2) << std::endl;

    // Perform matrix multiplication between two matrices
    matrix2x2 newMat2x2;    
    calculator.matMul(&newMat2x2, &myMat2_1, &myMat2_2);

    matrix3x3 newMat3x3;
    calculator.matMul(&newMat3x3, &myMat3_1, &myMat3_2);

    matrix4x4 newMat4x4;
    calculator.matMul(&newMat4x4, &myMat4_1, &myMat4_2);

    // Get the cross product of two vector 3s
    vector3 newVector;
    calculator.vecCross(&newVector, &myVec3_1, &myVec3_2);

    return 0;
}