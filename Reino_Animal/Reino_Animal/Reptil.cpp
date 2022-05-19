#include "Reptil.hpp"

//Construtor
Reptil::Reptil(string dieta, string fecundacao):Animal()
{
	this->pele = "Pele grossa";
	this->fecundacao = fecundacao;
	this->ectotermicos = true;
	this->dieta = dieta;
}

//Set
void Reptil::setDieta(string dieta)
{
	this->dieta = dieta;
}

void Reptil::setFecundacao(string fecundacao)
{
	this->fecundacao = fecundacao;
}

//Get
string Reptil::getDieta() const
{
	return (this->dieta);
}

bool Reptil::getEctotermicos() const
{
	return(this->ectotermicos);
}

string Reptil::getPele() const
{
	return(this->pele);
}

string Reptil::getfecundacao() const
{
	return(this->fecundacao);
}