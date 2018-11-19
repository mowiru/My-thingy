#include <iostream>
#include "objects.hpp"

using namespace std;

#pragma region Person_Class
void Person::print() {
  cout << "\n=====================================" << endl;
  cout << "ID: " << this->id << endl;
  cout << "Name: " << this->name << endl;
  cout << "Last Name: " << this->lastName << endl;
  cout << "Age: " << this->age << endl;
}

Person::Person() {
  this->id = -1;
  this->name = "?";
  this->lastName = "?";
  this->age = 0;
}

Person::Person(const char* name, const char* lastName, int age) {
  this->id = rand();
  this->name = name;
  this->lastName = lastName;
  this->age = age;
}
#pragma endregion Person_Class

#pragma region Person_Class
Employee::Employee() : Person::Person() {
  this->wage = 0;
}

Employee::Employee(const char* name, const char* lastName, int age, int wage) : Person::Person(name, lastName, age) {
  this->wage = wage;
}

void Employee::print() {
  Person::print();
  cout << "Wage: " << this->wage << endl;
}
#pragma endregion Person_Class

#pragma region Animal_Class
void animal::print(){
  cout << "\n=====================================" << endl;
  cout << "ID: " << this->id << endl;
  cout << "Kind: " << this->kind << endl;
  cout << "Color: " << this->color << endl;
  cout << "Call: " << this->call << endl;
}

animal::animal(){
  this->id = -1;
  this->kind = "?";
  this->color = "?";
  this->call = "?";
}

animal::animal(const char* name, const char* color, const char* call){
  this->id = rand();
  this->kind = name;
  this->color = color;
  this->call = call;
}
#pragma endregion Animal_Class
