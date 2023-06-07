#include <vector>
#include <iterator>
#include <iostream>
#include <string>

/*class Zooshop {
private:
	std::vector<Animal*>_animal;

public:
	Zooshop(std::vector<Animal*>animal){
		_animal = animal;
	}

	void AddAnimal(Animal* animal) {
		_animal.push_back(animal);
	}
	
	void SearchAnimal(std::vector<Animal*>& animal, std::string name) {
		for (const auto& it : animal) {
			if (it->GetName() == name) {
				std::cout << "Your searching animal is " << name << std::endl;
			}
		}

	}
	void ChangeAnimal(std::vector<Animal*>& animal, std::string name, std::string x) {
		for (const auto& it : animal) {
			if (it->GetName() == name) {
				it->SetName(x);
			}
		}
	}
	void BuyAnimal(std::string name) {
		int index = 0;
		for (const auto& it :_animal) {
			if (it->GetName() == name) {
				delete(it);
				_animal.erase(_animal.begin() + index);
			}
			index++;
		}

	}


};

class Animal {

private:
	std::string _name;
	std::string _gender;
	std::string _type;
	float _price;
	int _amount;
public:
	Animal(std::string name, std::string gender, float price, int amount, std::string type) {
		_name = name;
		_gender = gender;
		_price = price;
		_amount = amount;
		_type = type;
	}
	void ShowAnimal() {
		std::cout << "The name of animal is " << _name << std::endl;
		std::cout << "The gender of animal is " << _gender << std::endl;
		std::cout << "The type of animal is " << _type << std::endl;
		std::cout << "The price of animal is " << _price << std::endl;
		std::cout << "Amount of choosing animals is " << _amount << std::endl;

	}
	Animal(const Animal& a) {
		_name = a._name;
		_gender = a._gender;
		_price = a._price;
		_amount = a._amount;
		_type = a._type;
	}

	std::string GetName() {
		return _name;
	}
	void SetName(std::string x) {
		_name = x;
	}

};

int main() {
	Animal* animal1 = new Animal("Richi", "Boy", 589.5f, 1, "Dog");
	Animal* animal2 = new Animal("King", "Boy",  256.5f, 1, "Cat");
	Animal* animal3 = new Animal("Ugolek",  "Humster", 128.9f, 1, "Boy");
	Animal* animal4 = new Animal("Polosatic",  "lizard", 412.8f, 1, "Girl");
	Animal* animal5 = new Animal("Gans", "Girl",  745.f, 1, "Rabbit");

	Zooshop* zooshop = new Zooshop ();
	zooshop->AddAnimal(animal1);
	zooshop->AddAnimal(animal2);
	zooshop->AddAnimal(animal3);
	zooshop->AddAnimal(animal4);
	zooshop->AddAnimal(animal5);

	zooshop->ShowAnimal();
	zooshop->SearchAnimal(animal2);

	zooshop->ChangeAnimal(animal4, "Polosatic", "Evstignefiy");
	zooshop->ShowAnimal(animal4);

	Animal* animal6{ animal5 };
	zooshop->ShowAnimal();

	zooshop->SearchAnimal(animal6);
	zooshop->BuyAnimal(animal6);




	return 0;
}*/

class Digit {
private:
	int _data;
public:
	int operator+(Digit& digit)
	{
		return _data + digit._data;
	}
	int operator-(Digit& digit)
	{
		return _data - digit._data;
	}
	int operator*(Digit& digit)
	{
		return _data * digit._data;
	}
	int operator<(Digit& digit)
	{
		return _data < digit._data ? _data : digit._data;
	}
	int operator>(Digit& digit)
	{
		return _data > digit._data ? _data : digit._data;
	}
	bool operator==(Digit& digit)
	{
		return _data == digit._data ? 1:0;
	}
};