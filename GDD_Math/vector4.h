#ifndef _VECTOR4_H_
#define _VECTOR4_H_

#include "pch.h"
#include <iostream>

class Vector4
{
public:
	// Constructors
	Vector4();
	Vector4(float, float, float, float);
	~Vector4();

	std::string ToString();

	float x;
	float y;
	float z;
	float w;

private:
	float localVec4[3];

	void SetX(float);
	float GetX();

	void SetY(float);
	float GetY();

	void SetZ(float);
	float GetZ();

	void SetW(float);
	float GetW();

	void UpdateReferences();
};

#endif //_VECTOR4_H_