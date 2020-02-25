//#include "pch.h"
//#include "Matrix2.h"
//#include <string>
//
////Default Constructor
//Matrix2::Matrix2() {}
//
//Matrix2::Matrix2(float mat2[2][2])
//{
//	std::copy(&mat2[0][0], &mat2[0][0] + 2 * 2, &this->localMat2[0][0]);
//}
//
//Matrix2::Matrix2(const Matrix2& other)
//{
//	memcpy(this, &other, sizeof(Matrix2));
//}
//
//Vector2* Matrix2::MatMul(float** m2, Vector2* v2x1)
//{
//	Vector2* pM2xV1 = new Vector2();
//		
//	pM2xV1->x = (m2[0][0] * v2x1->x) + (m2[0][1] * v2x1->y);
//	pM2xV1->y = (m2[1][0] * v2x1->x) + (m2[1][1] * v2x1->y);
//
//	this->AddToVectorList(pM2xV1);
//
//	return pM2xV1;
//}
//
//float* Matrix2::MatMul(float** m2, float* v2x1)
//{
//	float* pM2xV1 = new float[2];
//
//	pM2xV1[0] = (m2[0][0] * v2x1[0]) + (m2[0][1] * v2x1[1]);
//	pM2xV1[1] = (m2[1][0] * v2x1[0]) + (m2[1][1] * v2x1[1]);
//
//	return pM2xV1;
//}
//
//float** Matrix2::MatMul(float** m2_1, float** m2_2)
//{
//	float** pM2xM2;
//	pM2xM2 = new float* [2];	
//
//	pM2xM2[0][0] = (m2_1[0][0] * m2_2[0][0]) + (m2_1[0][1] * m2_2[1][0]);
//	pM2xM2[0][1] = (m2_1[0][0] * m2_2[0][1]) + (m2_1[0][1] * m2_2[1][1]);
//	pM2xM2[1][0] = (m2_1[1][0] * m2_2[0][0]) + (m2_1[1][1] * m2_2[1][0]);
//	pM2xM2[1][1] = (m2_1[1][0] * m2_2[0][1]) + (m2_1[1][1] * m2_2[1][1]);
//
//	return pM2xM2;
//}
//
//void Matrix2::AddToArrayList(float** currentArray)
//{
//	this->arrayList.push_back(currentArray);
//	this->arrayListSize++;
//}
//
//void Matrix2::AddToVectorList(Vector2* currentVector)
//{
//	this->vectorList.push_back(currentVector);
//	this->vectorListSize++;
//}
//
//Matrix2::~Matrix2()
//{
//	
//}