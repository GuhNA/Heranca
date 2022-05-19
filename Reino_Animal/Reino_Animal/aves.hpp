#ifndef AVES_HPP
#define AVES_HPP

#include "Animais.hpp"

class Ave:public Animal
{
	//variaveis
private:
	bool penas;
	bool vertebrados;
	bool endotermicos;
	string dieta;
	string fecundacao;

	//metodos
public:

	//Set
	void setDieta(string dieta);

	//Get
	bool getPenas() const;
	bool getVertebrados() const;
	bool getEndotermicos() const;
	string getDieta() const;
	string getFencudacao() const;

	//Construtor parametrico
	Ave(string dieta);
};
#endif // !AVES_HPP

