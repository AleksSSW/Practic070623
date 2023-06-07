#include "ZooShop.h"
#include <iostream>

void PetShop::AddAnimal()
{
	std::string gender;
	std::string name;
	float price;
	int amount;

	std::cout << "Enter gender: " << '\n';
	std::getline(std::cin, gender);

	std::cout << "Enter name: " << '\n';
	std::getline(std::cin, name);

	std::cout << "Enter price: " << '\n';
	std::cin >> price;

	std::cout << "Enter amount: " << '\n';
	std::cin >> amount;

	Animal* animal = new Animal(gender, name, price, amount);
	_animals.push_back(animal);

}

void PetShop::AddAnimal(Animal* animal)
{
	_animals.push_back(animal);
}

void PetShop::DeleteAnimal(std::string name) 
{
	int index = 0;
	for (const auto& it : _animals)
	{
		if (it->GetName() == name) {
			_animals.erase(_animals.begin()+index);
			delete(it);
        }
		index++;
	}
}

void PetShop::ChangeAnimal(Animal* animal) {
	std::string gender;
	std::string name;
	float price;
	int amount;
	
	system("cls");
	std::cout << "What do you want to change?: " << std::endl;
	std::cout << "1-Gender" << std::endl;
	std::cout << "2-Name" << std::endl;
	std::cout << "3-Price" << std::endl;
	std::cout << "4-Amount" << std::endl;

	int input;
	system("cls"); //полностью очищаем консоль
	std::cin >> input;
	switch (input)
	{
	case 1:
		std::cout << "Enter a new gender: " << std::endl;
		std::getline(std::cin, gender);
		animal->SetGender(gender);
		break;
	case 2:
		std::cout << "Enter a new name: " << std::endl;
		std::getline(std::cin, name);
		animal->SetName(name);

		break;
	case 3:
		std::cout << "Enter a new price: " << std::endl;
		std::cin >> price;
		animal->SetPrice(price);
		break;
	case 4:
		std::cout << "Enter a new amount: " << std::endl;
		std::cin >> amount;
		animal->SetAmount(amount);
		break;
	default:
		break;

	}
}