#include <iostream>
#include <string>

using namespace std;

int main()
{
    string saludo = "Hello World";
    cout << saludo.size()<<endl;
    
    // Convertir de string a int
    string texto = "10203040";
    cout << stoi(texto)<<endl;
    
    // Convertir de string a float
    texto = "10.92";
    cout << stof(texto);

    return 0;
}
