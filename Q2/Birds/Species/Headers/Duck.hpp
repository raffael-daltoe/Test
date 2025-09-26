#pragma once
#include "Bird.hpp"

using namespace std;

class Duck : public Bird {  
public:
    Duck(const string& name, double weight, int age);
    void soundEmission() const override;  
    void feedItself() const override;     
    void fly() const override;            
    void displayInfo() const override;    
};