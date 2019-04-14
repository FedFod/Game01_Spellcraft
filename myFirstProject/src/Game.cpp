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

void Game::GoBackToMenu(char choise)
{
	std::cout << "(Go back to menu < b >)" << std::endl;
	choise = _getwch();
	switch (choise)
	{
	case 'b':
		break;
	case 'B':
		break;
	default:
		std::cout << "Please insert a valid option.\n";
		break;
	}
}

void Game::PrintMenu()
{	
	bool exitMenu = false;
	char choise;

	while (!exitMenu)
	{	
		//std::cout << std::string(100, '\n');
		std::cout << std::endl;
		std::cout << SEPARATOR;
		std::cout << ">> GAME MENU\n";
		std::cout << " - Open Inventory < i >\n";
		std::cout << " - Review the Spells you know < s >\n";
		std::cout << " - Go to a Learning Session < l >\n";
		std::cout << " - Fight another Wizard/Witch < f >\n";
		std::cout << " - Exit Game < e >\n";
		std::cout << SEPARATOR << "\n";

		choise = _getwch();
		std::cout << ">> You chose: " << choise << std::endl;
		std::cout << std::endl;

		switch (choise)
		{
		case 'i':
			m_MainCharacter.PrintInventory();
			GoBackToMenu(choise);
			break;

		case 's':
			m_MainCharacter.PrintKnownSpells();
			GoBackToMenu(choise);
			break;

		case 'l':
			m_MainCharacter.LearnSpell();
			break;

		case 'e':
			std::cout << "You are exiting the Game.\n\n";
			exitMenu = true;
			break;

		default:
			std::cout << "Please insert a valid option.\n";
			break;
		}
	}
}

void Game::PrintIntroduction()
{
	std::cout << "*** Welcome to Spellcraft ***\n" << std::endl; 
	std::cout << ">> Please enter your name: " << std::endl;

	std::string name;
	std::cin >> name;
	m_MainCharacter.SetName(name);

	std::cout << ">> Please enter your age: " << std::endl;
	int age;
	std::cin >> age;
	m_MainCharacter.SetAge(age);

	std::cout << "\n>> Very well!\n";

	m_MainCharacter.PrintPersonalInfo();
	m_MainCharacter.PrintInventory();

	std::cout << ">> Here begins your Journey!\n\n"; 
	std::cout << "(Press any key to start your Journey)\n";
	char tmpKey = _getwch();
	//std::cout << std::string(100, '\n');
}
