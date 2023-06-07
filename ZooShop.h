#pragma once
#include "Animal.h"
#include <vector>

class PetShop {
private:
	std::vector<Animal*>_animals;
public:
	void AddAnimal(Animal* animal);
	
	void AddAnimal();

	void DeleteAnimal(std:: string name);
	
	void ChangeAnimal(Animal* animal);


};
