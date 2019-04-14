#include "Wizard.h"


Wizard::Wizard(const std::string& name, int age)
	: m_Name(name), m_Age(age)
{
	InitializeInventory();
}

Wizard::Wizard()
	: m_Name("Unknown"), m_Age(-1)
{
	InitializeInventory();
}

// Destructor
Wizard::~Wizard()
{
}

void Wizard::InitializeInventory()
{
	Gold gold;
	Mana mana;
	m_Inventory.push_back(gold);
	m_Inventory.push_back(mana);
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

//----LEARN SPELLS---------------
void Wizard::LearnSpell()
{	
	bool learningSession = true;
	while (learningSession)
	{
		std::cout << SMALLSEP;
		std::cout << ">> Welcome to a Learning Session.\n";
		std::cout << ">> These are the Spells you can learn: \n" << std::endl;
		MasterSpellBook::PrintMasterSpellBook();	
		std::cout << "\n>> You have " << m_Inventory[1].GetAmount() << " parts of Mana. Use them to learn new Spells." << std::endl;
		std::cout << ">> Which Spell do you want to learn?\n\n(Insert the Learning Code of the Spell < learning code >)" << std::endl;
		std::cout << "(Go back to menu < b >)" << std::endl;
		
		int learnCode;
		std::cin >> learnCode;
		Spell spellToLearn = *MasterSpellBook::GetSpell(learnCode);
		if (spellToLearn.GetCost() < 0) {
			std::cout << ">> You have insert a wrong Learning Code.\n";
		}
		else {
			m_SpellBook.push_back(spellToLearn);
			m_Inventory[1].SetAmount(m_Inventory[1].GetAmount() - spellToLearn.GetCost());
		}
		std::cout << ">> Congratulations! You just learnt the Spell << " << spellToLearn.GetName() << " >>\n\n";

		std::cout << "Do you want to learn more? < y/n >\n";

		char quit = _getwch();
		if (quit == 'n')
		{
			learningSession = false;
		}
	}
}


//----PRINTERS-------------------
void Wizard::PrintInventory()
{	
	std::cout << SMALLSEP;
	std::cout << ">> This is your current inventory: " << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < m_Inventory.size(); i++)
	{
		std::cout << " - " << m_Inventory[i].GetName() << " x " << m_Inventory[i].GetAmount() << std::endl;
	}
	std::cout << SMALLSEP << std::endl;
}

void Wizard::PrintPersonalInfo()
{
	std::cout << ">> Your name is: " << m_Name << std::endl;
	std::cout << ">> And your age is: " << m_Age << std::endl;
	std::cout << std::endl;
}

void Wizard::PrintKnownSpells()
{
	int spellsBookSize = m_SpellBook.size();
	std::cout << SMALLSEP;
	std::cout << ">> Number of known spells: " << spellsBookSize << std::endl;

	if (spellsBookSize == 0)
	{
		std::cout << ">> The wizard " << m_Name << " doesn't know any spells.\n";
	}
	else {
		// print known spells
		std::cout << ">> Spells that the wizard knows: " << std::endl;
		for (int i = 0; i < spellsBookSize; i++)
		{
			std::cout << "- " << m_SpellBook[i].GetName() << std::endl;
		}
	}
	std::cout << SMALLSEP << std::endl;
}
//------------------------------------