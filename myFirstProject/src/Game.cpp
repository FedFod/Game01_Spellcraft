#include "Game.h"

Game::Game()
{
}


Game::~Game()
{
}

void Game::PrintWizardInfo(Wizard* wizzy)
{
	std::cout << "Good! Your name is : " << wizzy->GetName() << std::endl;
	std::cout << "And your age is: " << wizzy->GetAge() << std::endl;
}

void Game::PrintWizardKnownSpells(Wizard* wizzy)
{	
	std::vector<Spell>* SpellBook = wizzy->GetSpellBook();

	int spellsBookSize = wizzy->GetSpellBook()->size();
	std::cout << "Number of known spells: " << spellsBookSize << std::endl;

	if (spellsBookSize == 0)
	{
		std::cout << "The wizard " << wizzy->GetName() << " doesn't know any spells." << std::endl;
		std::cout << "--------------------" << std::endl;
	}
	else {
		// print known spells
		std::cout << "Spells that the wizard knows: " << std::endl;
		for (int i = 0; i < spellsBookSize; i++)
		{	
			std::cout << "- " << (*SpellBook)[i].m_Name << std::endl;
		}
	}
}