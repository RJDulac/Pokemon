#include <iostream>
using namespace std;

#include "Classes/Pokemon.cpp"

int main()
{
    Pokemon myPokemon("Eevee", Pokemon::NORMAL);

    myPokemon.TypeInfo();

    Pokemon sylveon("Sylveon", Pokemon::NORMAL, Pokemon::FAIRY);

    sylveon.TypeInfo();

    cout << sylveon.CheckType("Normal");
}