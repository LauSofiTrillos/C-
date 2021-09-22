// ejemplo static
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  string name;
  int age;

public:
  static int number_of_persons;
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
    number_of_persons += 1;
  }
  ~Person() 
  {
    cout << "Destruction" << endl; 
  }

  void change_name(string name) 
  {
    this->name = name; 
  }

  void change_age(int age)
  {
    this->age = age;
  }

  void say_hi() { 
    cout << name << ":" << age << endl; 
  }
};

int Person::number_of_persons = 0;

int main() {
  
  Person *p = new Person("Zero", 0);
  Person *p2 = new Person("two", 2);
  Person *p3 = new Person("four", 4);

  cout << Person::number_of_persons << endl;
  p -> say_hi();
  p2 -> say_hi();
  p3 -> say_hi();
}
