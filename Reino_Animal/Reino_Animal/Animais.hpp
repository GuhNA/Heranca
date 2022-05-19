#ifndef ANIMAIS_HPP
#define ANIMAIS_HPP

#include "Includes.hpp"

class Animal 
{
	//variaveis
private:
	bool eucariontes;
	bool heterotroficos;
	bool paredeCelular;
	bool multiCelular;

	//metodos
public:

	//Acho que nao deveria ter sets afinal pra ser um animal ja tem q estar iniciado com as
	//Com as caracteristicas. Entao fiz um so.

	//Set
	void setEucariontes(bool eucariontes);

	//Get
	bool getEucariontes() const;
	bool getHeterotroficos() const;
	bool getParedeCelular() const;
	bool getMultiCelular() const;


	//Construtor default
	Animal();

	//acoes
	void testeAnimal();

};
#endif // !ANIMAIS_HPP

