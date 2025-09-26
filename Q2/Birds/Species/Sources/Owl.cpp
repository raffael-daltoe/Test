#include <Owl.hpp>
#include <iostream>

Owl::Owl(const string& name, double weight, int age) 
    : Bird(name, weight, age, " Florestas e Madereiras") {}

void Owl::soundEmission() const {
    cout << getName() << " está dizendo: HU-HU!" << endl;
}

void Owl::feedItself() const {
    cout << getName() << " esta caçando pequenos roedores durante a noite" << endl;
}

void Owl::fly() const {
    cout << getName() << 
                      " não está voando porque está com a asa machucada,"
                      "está em seu habitat: " << habitat << endl;
}
