#ifndef REPTIL_HPP
#define REPTIL_HPP

#include "Animais.hpp"

class Reptil:public Animal
{
	//variaveis
private:
	bool ectotermicos;
	string pele;
	string dieta;
	string fecundacao;
	
	//metodos
public:

	//Set
	void setDieta(string dieta);
	void setFecundacao(string fecundacao);

	//Get

	bool getEctotermicos() const;
	string getPele() const;
	string getDieta() const;
	string getfecundacao() const;

	//Construtor parametrico
	Reptil(string dieta, string fecundacao);
	
};
#endif // !REPTIL_HPP

