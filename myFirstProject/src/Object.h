#pragma once

#include <iostream>

class Object
{
public:
	Object();
	~Object();

	int GetAmount();
	std::string GetName();

	void SetName(const std::string& name);
	void SetAmount(int amount);

	virtual void Use();

private:
	int m_Amount;
	std::string m_Name;
};

class Gold : public Object
{
public:
	Gold();
	Gold(int amount);
	~Gold();

	void Use();
};

class Mana : public Object
{
public:
	Mana();
	Mana(int amount);
	~Mana();

	void Use();
};
