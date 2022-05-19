#include "Animais.hpp"

Animal::Animal()
{
	this->eucariontes = true;
	this->heterotroficos = true;
	this->multiCelular = true;
	this->paredeCelular = false;

}

//Set
void Animal::setEucariontes(bool eucariontes)
{
	this->eucariontes = eucariontes;
}


//Get
bool Animal::getEucariontes() const
{
	return(this->eucariontes);
}

bool Animal::getHeterotroficos() const
{
	return(this->heterotroficos);
}

bool Animal::getMultiCelular() const
{
	return(this->multiCelular);
}

bool Animal::getParedeCelular() const
{
	return(this->paredeCelular);
}

//Acoes
void Animal::testeAnimal()
{
	if (this->getEucariontes() && this->getMultiCelular() && this->getHeterotroficos() && !this->getParedeCelular())
	{
		cout << "E um animal" << endl << endl;
	}
	else
	{
		cout << "Nao e um animal" << endl << endl;
	}
}
