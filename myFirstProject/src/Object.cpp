#include "Object.h"

Object::Object()
{
}

Object::~Object()
{
}

void Object::Use()
{
	std::cout << "Override this function" << std::endl;
}

//---Gold Class-----------------
Gold::Gold()
{
	m_Amount = 50;
	m_Name = "Gold";
}

Gold::Gold(int amount)
{
	m_Amount = amount;
	m_Name = "Gold";
}

Gold::~Gold()
{
}

void Gold::Use()
{

}