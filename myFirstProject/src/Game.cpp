#include "Game.h"
#include <conio.h>


Game::Game()
{
}

Game::~Game()
{
}

void Game::Play()
{
	PrintMenu();
}

void Game::PrintMenu()
{	
	int exitMenu = false;
	char choise;

	while (!exitMenu)
	{	
		std::cout << std::string(100, '\n');
		std::cout << std::endl;
		std::cout << "Choose one of the following:\n";
		std::cout << " - Open Inventory (Press 'i')\n";
		std::cout << " - Review the Spells you know (Press 's')\n";
		std::cout << " - Go to a Learning Session (Press 'l')\n";
		std::cout << " - Fight another Wizard/Witch (Press 'f')\n";
		std::cout << " - Exit Menu (Press 'e')\n\n";

		choise = _getwch();

		switch (choise)
		{
		case 'i':
			m_MainCharacter.PrintInventory();
			break;

		case 's':
			m_MainCharacter.PrintKnownSpells();
			break;

		case 'l':
			m_MainCharacter.LearnSpell();
			break;

		case 'e':
			std::cout << "You are exiting the menu.\n\n";
			exitMenu = true;
			break;

		default:
			std::cout << "Please insert a valid option.\n";
			break;
		}
		system("PAUSE");
	}
}

void Game::PrintIntroduction()
{
	std::cout << "<<< Welcome to Spellcraft >>>\n" << std::endl; 
	std::cout << "Please enter your name: " << std::endl;

	std::string name;
	std::cin >> name;
	m_MainCharacter.SetName(name);

	std::cout << "Please enter your age: " << std::endl;
	int age;
	std::cin >> age;
	m_MainCharacter.SetAge(age);

	std::cout << "\nVery well!\n";

	m_MainCharacter.PrintPersonalInfo();
	m_MainCharacter.PrintInventory();

	std::cout << "\nHere begins your Journey!\n\n"; 
	system("pause");
	std::cout << std::string(100, '\n');
}
