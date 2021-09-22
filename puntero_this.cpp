// ejemplo uso puntero this 
#include <iostream>
#include <string>

using namespace std;

class Person {
  private:
  string name;
  int age;
  
  public:
  // constructor 
  Person(string name, int age) 
  {
    this -> name = name;
    this -> age = age;
  }
  // destructor 
  ~Person()
  { 
    cout << "Destruction" << endl;
  }
  
  void cambiar_nombre(string name)
  {
    this -> name = name; 
  }
  void cambiar_edad(int age)
  {
    this -> age = age; 
  }
  
  void say_hi() 
  { 
    cout << name << endl << age << endl; 
  }
};

int main() {
  Person *p = new Person("Zero", 14);
  p -> say_hi();
  p -> cambiar_nombre("Sofia");
  p -> cambiar_edad(20);
  p -> say_hi();
  delete p;
 }
