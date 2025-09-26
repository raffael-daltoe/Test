#include "Bird.hpp"
#include <iostream>

using namespace std;

Bird::Bird(const string& name, double weight, int age, const string& habitat) 
    : name(name), weight(weight), age(age), habitat(habitat) {}

string Bird::getName() const { return name; }
double Bird::getWeight() const { return weight; }
int Bird::getAge() const { return age; }

void Bird::setAge(int newAge) { 
    if (newAge >= 0) age = newAge;
}

void Bird::setWeight(double newWeight) { 
    if (newWeight > 0) weight = newWeight; 
}

void Bird::displayInfo() const {
    cout << "Nome: " << name << ", Peso: " << weight 
              << "kg, Idade: " << age << " anos, habitat: " << habitat << endl;
}