#include"aves.hpp"
#include"Reptil.hpp"


string SN(int num)
{
    if (num == 1)
    {
        return("Sim");
    }
    else
    {
        return("Nao");
    }
}

void mostrarAnimal(Animal A2)
{
    cout << "Animal" << endl
    << "eucariontes: " << SN(A2.getEucariontes()) << endl
    << "heterotroficos: " << SN(A2.getHeterotroficos()) << endl
    << "parede celular: " << SN(A2.getParedeCelular()) << endl
    << "Multi celular: " << SN(A2.getMultiCelular()) << endl << endl;
}


void mostrarReptil(Reptil A2)
{
    cout << "Reptil" << endl
        << "Ectotermicos: " << SN(A2.getEctotermicos()) << endl
        << "Dieta: " << A2.getDieta() << endl
        << "Pele: " << A2.getPele() << endl
        << "Fecundacao: " << A2.getfecundacao() << endl << endl;
}

void mostrarAve(Ave A2)
{
    cout << "Ave" << endl
        << "Penas: " << SN(A2.getPenas()) << endl
        << "Vertebrado: " << SN(A2.getVertebrados()) << endl
        << "Endotermicos: " << SN(A2.getEndotermicos()) << endl
        << "Fecundacao: " << A2.getFencudacao() << endl
        << "Dieta: " << A2.getDieta() << endl << endl;
}

int main()
{
    Animal A1;
    cout << "Animal A1" << endl;
    mostrarAnimal(A1);
    cout << "Reptil R1" << endl;
    Reptil R1("Carnivoro","Oviparo");
    mostrarAnimal(R1);
    R1.testeAnimal();
    mostrarReptil(R1);
    Ave V1("herbivora");
    mostrarAve(V1);
    
    return 0;
}
