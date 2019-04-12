#pragma once

#include <iostream>

class Object
{
public:
	Object();
	~Object();

	virtual void Use();

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
