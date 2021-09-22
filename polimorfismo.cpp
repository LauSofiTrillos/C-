// ejemplo polimorfismo
#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    static int numero_animales;
    string alimento;
public:
    Animal();
    ~Animal();
    static int obtenerNumeroAnimales();
    string obtenerAlimento(){
        return alimento;
    };
// polimorfismo 
    void comer(Animal *a){
        cout<<"Este animal está comiendo " <<a -> alimento<<"... ñom ñom"<<endl;
    };
};

int Animal::numero_animales = 0;

Animal::Animal()
{
    cout<<"Creando nuevo animal ... "<<endl;
    numero_animales += 1;
}

Animal::~Animal()
{
    cout<<"Borrando animal..."<<endl;
    numero_animales-=1;
}

int Animal::obtenerNumeroAnimales()
{
    return numero_animales;
}

class Herviboro : public Animal {
public:
    Herviboro():Animal(){
        this->alimento = "plantas ";
    }
    void pastar(){
        cout<<"Este animal está pasteando ..."<<endl;
    }
};

class Carnivoro : public Animal {
public:
    Carnivoro():Animal(){
        this->alimento = "carne ";
    }
    void cazar(){
        cout<<"Este animal está cazando ..."<<endl;
    }
};

class Omnivoro : public Herviboro, public Carnivoro{
public: 
    Omnivoro():Herviboro(),Carnivoro(){}
    void comer(){
        cout<<"Este animal come lo que sea ...."<<endl;
    }
};

int main(){
  
    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout<<"Numero de animales: "<<Animal::obtenerNumeroAnimales()<<endl;
    
    cout <<"HERVIBORO"<<endl;
    h->pastar();
    a->comer(h);
    
    cout <<"CARNIVORO"<<endl;
    c->cazar();
    a->comer(c);
    
    //cout<<"OMNIVORO"<<endl;
    
    //a->Carnivoro::comer(o);
    //a->Herviboro::comer(o));

    delete a;
    cout<<"Numero de animales: "<<Animal::obtenerNumeroAnimales()<<endl;
}
