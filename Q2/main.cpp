#include "Bird.hpp"
#include "Duck.hpp"
#include "Sparrow.hpp"
#include "Owl.hpp"

#include <vector>
#include <memory>
#include <iostream>

using namespace std;

int main() {
    vector<unique_ptr<Bird>> birds;
    
    birds.push_back(make_unique<Duck>("Joãozinho", 2.5, 3));
    birds.push_back(make_unique<Sparrow>("Mariazinha", 0.03, 2));
    birds.push_back(make_unique<Owl>("Fulaninho", 1.8, 5));
    
    for (const auto& bird : birds) {
        cout << "=== " << bird->getName() << " ===\n";
        bird->displayInfo();   
        bird->soundEmission();  
        bird->feedItself();       
        bird->fly();            
        
        bird->setWeight(bird->getWeight() + 0.1); 
        
        cout << "Peso atualizado: " << bird->getWeight() << "kg\n";
        cout << "------------------------\n\n";
    }
    
    return 0;
}