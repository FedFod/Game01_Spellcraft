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

// Getters----------------------
int Object::GetAmount()
{
	return m_Amount;
}

std::string Object::GetName()
{
	return m_Name;
}
//-----------------------------
// Setters---------------------
void Object::SetAmount(int amount)
{
	m_Amount = amount;
}

void Object::SetName(const std::string& name)
{
	m_Name = name;
}

//---Gold Class-----------------
Gold::Gold()
{
	SetAmount(50);
	SetName("Gold");
}

Gold::Gold(int amount)
{
	SetAmount(amount);
	SetName("Gold");
}

Gold::~Gold()
{
}

void Gold::Use()
{

}

//----MANA CLASS----------------
Mana::Mana(int amount)
{
	SetAmount(amount);
	SetName("Mana");
}

Mana::Mana()
{
	SetAmount(100);
	SetName("Mana");
}

Mana::~Mana()
{
}

void Mana::Use()
{

}