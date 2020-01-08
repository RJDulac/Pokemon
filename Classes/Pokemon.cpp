#include <iostream>
#include <vector>
using namespace std;

class Pokemon
{

protected:
    string name;
    int pokedexNumber;
    vector<string> typeCollection;

public:
    enum Type
    {
        NORMAL,
        FAIRY,
        GRASS,
        POISON,
        FIRE,
        FLYING,
        BUG,
        ELECTRIC

    };

    void SetType(Type type)
    {
        switch (type)
        {
        case NORMAL:
            typeCollection.push_back("Normal");
            break;
        case FAIRY:
            typeCollection.push_back("Fairy");
            break;
        case GRASS:
            typeCollection.push_back("Grass");
            break;
        case POISON:
            typeCollection.push_back("Poison");
            break;
        case FIRE:
            typeCollection.push_back("Fire");
            break;
        case FLYING:
            typeCollection.push_back("Flying");
            break;
        case BUG:
            typeCollection.push_back("Bug");
            break;
        case ELECTRIC:
            typeCollection.push_back("Electric");
            break;
        default:
            cout << "something went wrong";
        }
    }
    Pokemon(string pokeName, Type type) : name(pokeName)
    {
        SetType(type);
    }
    Pokemon(string pokeName, Type type, Type type2) : name(pokeName)
    {
        SetType(type);
        SetType(type2);
    }
    string GetName()
    {
        return name;
    }

    void TypeInfo()
    {
        cout << name << " is type ";
        for (string type : typeCollection)
        {
            cout << type << " ";
        }
        cout << endl;
    }
    bool CheckType(string pokeType)
    {
        for (string type : typeCollection)
        {
            if (type == pokeType)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};