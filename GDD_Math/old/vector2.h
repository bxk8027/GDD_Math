#ifndef _VECTOR2_H_
#define _VECTOR2_H_

#include "pch.h"
#include <iostream>

class Vector2
{
public:
	// Constructors
	Vector2();
	Vector2(float, float);
	~Vector2();

	std::string ToString();

	float x;
	float y;

private:
	float localVec2[2];

	void SetX(float);
	float GetX();

	void SetY(float);
	float GetY();

	void UpdateReferences();
};

#endif //_VECTOR2_H_