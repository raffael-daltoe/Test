#include <Duck.hpp>
#include <iostream>

Duck::Duck(const string& name, double weight, int age) 
    : Bird(name, weight, age, "Lagos e Lagoas") {}

void Duck::soundEmission() const {
    cout << getName() << " Diz: Quack quack!" << endl;
}

void Duck::feedItself() const {
    cout << getName() << " está comendo plantas e procurando insetor na água" << endl;
}

void Duck::fly() const {
    cout << getName() << "está voando em " << habitat << endl;
}

void Duck::displayInfo() const {
    Bird::displayInfo();
    cout << "Tipo: Duck" << endl;
}