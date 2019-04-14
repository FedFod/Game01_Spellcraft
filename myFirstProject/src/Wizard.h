#pragma once
#include "Spell.h"
#include "Object.h"
#include <iostream>

class Wizard
{
public:
	Wizard(const std::string& name, int age);
	Wizard();

	~Wizard();

	//----------

	std::string GetName() const;
	int			GetAge()  const;
	std::vector<Spell>* GetSpellBook();

	void SetName(const std::string& name);
	void SetAge(int age);

	void LearnSpell();

	void PrintInventory();
	void PrintPersonalInfo();
	void PrintKnownSpells();

private:
	void InitializeInventory();

private:
	std::string m_Name;
	int m_Age;

	std::vector<Object> m_Inventory;
	std::vector<Spell>  m_SpellBook;
};

