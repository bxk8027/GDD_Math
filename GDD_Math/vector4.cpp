#include "pch.h"
#include "vector4.h"
#include <string>

// Default Constructor
Vector4::Vector4()
{
	this->localVec4[0] = 0.0f;
	this->localVec4[1] = 0.0f;
	this->localVec4[2] = 0.0f;
	this->localVec4[3] = 0.0f;

	this->UpdateReferences();
}

Vector4::Vector4(float x, float y, float z, float w)
{
	this->localVec4[0] = x;
	this->localVec4[1] = y;
	this->localVec4[2] = z;
	this->localVec4[2] = w;

	this->UpdateReferences();
}

void Vector4::SetX(float x)
{
	this->localVec4[0] = x;

	this->UpdateReferences();
}

float Vector4::GetX()
{
	return this->localVec4[0];
}

void Vector4::SetY(float y)
{
	this->localVec4[1] = y;

	this->UpdateReferences();
}

float Vector4::GetY()
{
	return this->localVec4[1];
}

void Vector4::SetZ(float z)
{
	this->localVec4[2] = z;

	this->UpdateReferences();
}

float Vector4::GetZ()
{
	return this->localVec4[2];
}

void Vector4::SetW(float w)
{
	this->localVec4[3] = w;

	this->UpdateReferences();
}

float Vector4::GetW()
{
	return this->localVec4[3];
}

std::string Vector4::ToString()
{
	return "[" + std::to_string(this->GetX()) + ", " + std::to_string(this->GetY()) + "]";
}

void Vector4::UpdateReferences()
{
	this->x = this->localVec4[0];
	this->y = this->localVec4[1];
}

Vector4::~Vector4()
{

}