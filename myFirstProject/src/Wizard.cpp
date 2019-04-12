#include "Wizard.h"


Wizard::Wizard(const std::string& name, int age)
	: m_Name(name), m_Age(age)
{	
	Gold gold;
	m_Inventory.push_back(gold);
}

Wizard::Wizard()
	: m_Name("Unknown"), m_Age(-1)
{
	Gold gold;
	m_Inventory.push_back(gold);
}

// Destructor
Wizard::~Wizard()
{
}

void Wizard::LearnSpell()
{	
	MasterSpellBook::PrintMasterSpellBook();
	//m_SpellBook.push_back(spell);
	//std::cout << "You have just learned the spell << " << spell.m_Name << " >>" << std::endl;
}

//----Getters----------------------
std::string Wizard::GetName() const
{
	return m_Name;
}

int Wizard::GetAge() const
{
	return m_Age;
}

std::vector<Spell>* Wizard::GetSpellBook() 
{
	return &m_SpellBook;
}
//--------------------------------

//----Setters--------------------
void Wizard::SetName(const std::string& name)
{
	m_Name = name;
}

void Wizard::SetAge(int age)
{
	m_Age = age;
}

//----PRINTERS-------------------
void Wizard::PrintInventory()
{
	std::cout << "This is your current inventory: " << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < m_Inventory.size(); i++)
	{
		std::cout << " - " << m_Inventory[i].m_Name << " x " << m_Inventory[i].m_Amount << std::endl;
	}
	std::cout << std::endl;
}

void Wizard::PrintPersonalInfo()
{
	std::cout << "Your name is: " << m_Name << std::endl;
	std::cout << "And your age is: " << m_Age << std::endl;
	std::cout << std::endl;
}

void Wizard::PrintKnownSpells()
{
	int spellsBookSize = m_SpellBook.size();
	std::cout << "Number of known spells: " << spellsBookSize << std::endl;

	if (spellsBookSize == 0)
	{
		std::cout << "The wizard " << m_Name << " doesn't know any spells.\n\n";
	}
	else {
		// print known spells
		std::cout << "Spells that the wizard knows: " << std::endl;
		for (int i = 0; i < spellsBookSize; i++)
		{
			std::cout << "- " << m_SpellBook[i].GetName() << std::endl;
		}
	}
}
//------------------------------------