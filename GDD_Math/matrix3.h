#ifndef _MATRIX2_H_
#define _MATRIX2_H_

#include "vector2.h"
#include <iostream>
#include <list>

class Matrix2
{
public:
	// Constructors
	Matrix2();
	Matrix2(float mat2[2][2]);
	Matrix2(const Matrix2& other);
	~Matrix2();

	float localMat2[2][2] = { 0.0f };
	
	Vector2* MatMul(float** m2, Vector2* v2x1);
	float* MatMul(float** m2, float* v2x1);
	float** MatMul(float** m2_1, float** m2_2);
	void AddToArrayList(float** currentArray);
	void AddToVectorList(Vector2* currentVector);

	std::string ToString();
	
private:
	
	std::list<Vector2*> vectorList;
	std::list<float**> arrayList;

	int arrayListSize = 0;
	int vectorListSize = 0;
};

#endif //_MATRIX2_H_