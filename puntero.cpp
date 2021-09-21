#include <iostream>

using namespace std;

int main() {
    
  char character = 'A';
  char *pointer = &character;
  
  // mostrar direccion de memoria 
  cout << (int *)&character << endl;
  cout << (int *)pointer << endl;
  
  // valor contenido en la direccion de memoria 
  cout << *pointer << endl;

}
