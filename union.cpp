// ejemplo de union 
#include <iostream>
#include <string>

using namespace std;

int main() {
  union number_letter {
    int number;
    char letter;
  };

  number_letter x = {'a'};

  cout << x.letter << endl; //a
  cout << x.number << endl; //97
}
