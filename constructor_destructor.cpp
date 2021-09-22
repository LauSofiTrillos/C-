#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  string name;
  int age;
  
  // constructor 
  Person(string n, int a)
  {
    name = n;
    age = a;
  }
  // destructor 
  ~Person()
  { 
    cout << "Destruction" << endl;
  }
  void say_hi() 
  { 
    cout << name << endl; 
  }
};

int main() {
  Person p = Person("Zero", 14);
  p.say_hi();
  
  
}
