#include "Aves.hpp"

//Construtor
Ave::Ave(string dieta):Animal()
{
	this->penas = true;
	this->endotermicos = true;
	this->fecundacao = "Oviparas";
	this->dieta = dieta;
	this->vertebrados = true;
}

//Set
void Ave::setDieta(string dieta)
{
	this->dieta = dieta;
}

//Get

bool Ave::getVertebrados() const
{
	return(this->vertebrados);
}

bool Ave::getPenas() const
{
	return(this->penas);
}

bool Ave::getEndotermicos() const
{
	return(this->endotermicos);
}

string Ave::getDieta() const
{
	return(this->dieta);
}

string Ave::getFencudacao() const
{
	return(this->fecundacao);
}