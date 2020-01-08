#include <iostream>
#include <vector>
using namespace std;

class Pokemon
{

protected:
    bool isNormal;
    bool isFairy;
    bool isGrass;
    bool isPoison;
    bool isFire;
    bool isFlying;
    bool isBug;
    bool isElectric;

    string name;
    int pokedexNumber;

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
    vector<string> typeCollection;

    void SetType(Type type)
    {
        switch (type)
        {
        case NORMAL:
            isNormal = true;
            typeCollection.push_back("Normal");
            break;
        case FAIRY:
            isFairy = true;
            typeCollection.push_back("Fairy");
            break;
        case GRASS:
            isGrass = true;
            typeCollection.push_back("Grass");
            break;
        case POISON:
            isPoison = true;
            typeCollection.push_back("Poison");
            break;
        case FIRE:
            isFire = true;
            typeCollection.push_back("Fire");
            break;
        case FLYING:
            isFlying = true;
            typeCollection.push_back("Flying");
            break;
        case BUG:
            isBug = true;
            typeCollection.push_back("Bug");
            break;
        case ELECTRIC:
            isElectric = true;
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

    /*void SetType(Type type)
    {
        switch (type)
        {
        case NORMAL:
            isNormal = true;
            break;
        case FAIRY:
            isFairy = true;
            break;
        case GRASS:
            isGrass = true;
            break;
        case POISON:
            isPoison = true;
            break;
        case FIRE:
            isFire = true;
            break;
        case FLYING:
            isFlying = true;
            break;
        case BUG:
            isBug = true;
            break;
        case ELECTRIC:
            isElectric = true;
            break;
        default:
            cout << "something went wrong";
        }
    }*/
    void TypeInfo()
    {
        cout << name << " is type ";
        for (string type : typeCollection)
        {
            cout << type << " ";
        }
        cout << endl;
    }
    bool GetNormal()
    {
        return isNormal;
    }
    bool GetFairy()
    {
        return isFairy;
    }
    bool GetGrass()
    {
        return isGrass;
    }
    bool GetPoison()
    {
        return isPoison;
    }
    bool GetFire()
    {
        return isFire;
    }
    bool GetFlying()
    {
        return isFlying;
    }
    bool GetBug()
    {
        return isBug;
    }
    bool GetElectric()
    {
        return isElectric;
    }
};