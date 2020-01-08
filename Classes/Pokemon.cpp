#include <iostream>
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
    Pokemon(string pokeName, Type type) : name(pokeName)
    {
        SetType(type);
    }
    string GetName()
    {
        return name;
    }
    void SetType(Type type)
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