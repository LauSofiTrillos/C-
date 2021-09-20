#include <iostream>

using namespace std;

class Mage
{
public:
    int Mana, Hp, Power;
    string name;

    Mage (int iMana, int iHp, int iPower)
    {
        Mana = iMana;
        Hp = iHp;
        Power = iPower;
    }
    void Spell()
    {
        cout << "coqueteo" << Power << endl;
    }
    void GetName(string iName){
        
        name = iName;
    }
    
private:


};

// Ejemplo Herencia 
class ReyHelado : public Mage
{
public:
    ReyHelado(int iMana, int iHp, int iPower):Mage(iMana,iHp,iPower)
    {
        Mana = iMana;
        Hp = iHp;
        Power = iPower + 10;
    }
private:

};

int main()
{
    Mage Mago1(80, 100, 30);
    ReyHelado Mago2(80, 100, 30);
    Mago1.GetName("Merlin");
    Mago2.GetName("ReyHelado");
    cout<<Mago1.name<<":"<<endl;
    Mago1.Spell();
    cout<<Mago2.name<<":"<<endl;
    Mago2.Spell();

    return 0;
}
