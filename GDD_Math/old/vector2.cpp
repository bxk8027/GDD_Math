#include "pch.h"
#include "vector2.h"
#include <string>

// Default Constructor
Vector2::Vector2()
{
	this->localVec2[0] = 0.0f;
	this->localVec2[1] = 0.0f;

	this->UpdateReferences();
}

Vector2::Vector2(float x, float y)
{
	this->localVec2[0] = x;
	this->localVec2[1] = y;

	this->UpdateReferences();
}

void Vector2::SetX(float x)
{
	this->localVec2[0] = x;

	this->UpdateReferences();
}

float Vector2::GetX()
{
	return this->localVec2[0];
}

void Vector2::SetY(float y)
{
	this->localVec2[1] = y;

	this->UpdateReferences();
}

float Vector2::GetY()
{
	return this->localVec2[1];
}

std::string Vector2::ToString()
{
	return "[" + std::to_string(this->GetX()) + ", " + std::to_string(this->GetY()) + "]";
}

void Vector2::UpdateReferences()
{
	this->x = this->localVec2[0];
	this->y = this->localVec2[1];
}

Vector2::~Vector2()
{

}