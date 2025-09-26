#include <Sparrow.hpp>
#include <iostream>

Sparrow::Sparrow(const string& name, double weight, int age) 
    : Bird(name, weight, age, "Areas Urbanas e Florestas") {}

void Sparrow::soundEmission() const {
    cout << getName() << " esta assoviando: chirip chirip!" << endl;
}

void Sparrow::feedItself() const {
    cout << getName() << " está bicando sementes no chao" << endl;
}

void Sparrow::fly() const {
    cout << getName() << " está voando entre as arvores em " << habitat << endl;
}