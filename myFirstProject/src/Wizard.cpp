#include "Wizard.h"


Wizard::Wizard(const std::string& name, int age)
	: m_Name(name), m_Age(age)
{	
}

Wizard::Wizard()
	: m_Name("Unknown"), m_Age(-1)
{
}

Wizard::~Wizard()
{
}


void Wizard::LearnSpell(Spell& spell)
{
	m_SpellBook.push_back(spell);
	std::cout << "You have just learned the spell << " << spell.m_Name << " >>" << std::endl;
}

std::string Wizard::GetName()
{
	return m_Name;
}

int Wizard::GetAge()
{
	return m_Age;
}

std::vector<Spell>* Wizard::GetSpellBook()
{
	return &m_SpellBook;
}


