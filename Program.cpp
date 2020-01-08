#include <iostream>
using namespace std;

#include "Classes/Pokemon.cpp"

int main()
{
    Pokemon myPokemon("Eevee", Pokemon::NORMAL);

    myPokemon.TypeInfo();

    Pokemon sylveon("Sylveon", Pokemon::NORMAL, Pokemon::FAIRY);

    sylveon.TypeInfo();
    // if (myPokemon.GetNormal() == true)
    // {
    //     cout << myPokemon.GetName() << " is "
    //          << " normal." << endl;
    // }
    // Pokemon pikachu("Pikachu", Pokemon::ELECTRIC);

    // if (pikachu.GetElectric() == true)
    // {
    //     cout << pikachu.GetName() << " Zaps!" << endl;
    // }
}