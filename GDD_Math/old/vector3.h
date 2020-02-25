#ifndef _VECTOR3_H_
#define _VECTOR3_H_

#include "pch.h"
#include <iostream>

class Vector3
{
public:
	// Constructors
	Vector3();
	Vector3(float, float, float);
	~Vector3();

	std::string ToString();

	float x;
	float y;
	float z;

private:
	float localVec3[3];

	void SetX(float);
	float GetX();

	void SetY(float);
	float GetY();

	void SetZ(float);
	float GetZ();

	void UpdateReferences();
};

#endif //_VECTOR3_H_