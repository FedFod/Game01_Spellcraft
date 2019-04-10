#pragma once
#include "Spell.h"
#include <iostream>

class Wizard
{

public:
	Wizard(const std::string& name, int age);
	Wizard();

	~Wizard();
	
	void LearnSpell(Spell& spell);

	std::string GetName();
	int			GetAge();
	std::vector<Spell>* GetSpellBook();

private:
	std::string m_Name;
	int m_Age;

	std::vector<Spell> m_SpellBook;
};

