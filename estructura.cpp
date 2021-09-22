// ejemplo estructura 
#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
};

int main(){
    
// creando una persona sin necesidad de puntero  
    Persona p = Persona();
    p.nombre = "Sofi";
    p.edad = 0;
    cout <<"Se llama " << p.nombre << " y tiene " << p.edad << " años" <<endl ;
  
//  creando una persona utilizando puntero 
    Persona *p_2 = new Persona();      //Se usa la palabra reservada 'new'
    p_2-> nombre = "Mauk";         //Se utiliza la notación de flecha
    p_2-> edad = 17;
    cout <<"Se llama " << p_2->nombre << " y tiene " << p_2->edad << " años" <<endl ;

    //Tamaño
    cout << "El tamaño de p es: "<< sizeof(p) << endl;
    cout << "El tamaño de p.nombre es: "<< sizeof(p.nombre) << endl;
    cout << "El tamaño de p.edad es: " << sizeof(p.edad) << endl;
    
    return 0;  

}
  
