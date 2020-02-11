#include "pch.h"
#include "vector3.h"
#include <string>

// Default Constructor
Vector3::Vector3()
{
	this->localVec3[0] = 0.0f;
	this->localVec3[1] = 0.0f;
	this->localVec3[2] = 0.0f;

	this->UpdateReferences();
}

Vector3::Vector3(float x, float y, float z)
{
	this->localVec3[0] = x;
	this->localVec3[1] = y;
	this->localVec3[2] = z;

	this->UpdateReferences();
}

void Vector3::SetX(float x)
{
	this->localVec3[0] = x;

	this->UpdateReferences();
}

float Vector3::GetX()
{
	return this->localVec3[0];
}

void Vector3::SetY(float y)
{
	this->localVec3[1] = y;

	this->UpdateReferences();
}

float Vector3::GetY()
{
	return this->localVec3[1];
}

void Vector3::SetZ(float z)
{
	this->localVec3[2] = z;

	this->UpdateReferences();
}

float Vector3::GetZ()
{
	return this->localVec3[2];
}

std::string Vector3::ToString()
{
	return "[" + std::to_string(this->GetX()) + ", " + std::to_string(this->GetY()) + "]";
}

void Vector3::UpdateReferences()
{
	this->x = this->localVec3[0];
	this->y = this->localVec3[1];
}

Vector3::~Vector3()
{

}