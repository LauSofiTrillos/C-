#include <iostream>

using namespace std;

class Mage
{
public:
    Mage (int BasePower, int BaseHP)
    {
        Power = BasePower;
        hp = BaseHP;
    }

    float Damage ()
    {
        return Power;
    }

    void GetDamage (int Value)
    {
        hp -= Value;
        cout << "Mi mago le queda: "<< hp << endl;
    }

    void PrintHP ()
    {
        cout << hp << endl;
    }


protected:

    int Power, hp;

};

class IceMage: public Mage
{
public:
    IceMage (int BasePower, int BaseHP) : Mage (BasePower, BaseHP)
    {
        Power = BasePower + 1;
        hp = BaseHP;

    }

};
class FireMage: public Mage
{
public:
    FireMage (int BasePower, int BaseHP) : Mage (BasePower, BaseHP)
    {
        Power = BasePower;
        hp = BaseHP + 10;

    }

};

int main()
{
    Mage* CurrentMage;

    FireMage Gandalf (10, 10);
    IceMage Dumboldore (10, 10);

    CurrentMage = &Gandalf;
    CurrentMage->GetDamage(1);
    
    // Ejemplo de polimorfismo 

    CurrentMage = &Dumboldore;
    CurrentMage->GetDamage(5);

    Gandalf.PrintHP();
    Dumboldore.PrintHP();
}
