#pragma once
#include "Bird.hpp"

using namespace std;

class Sparrow : public Bird { 
public:
    Sparrow(const string& name, double weight, int age);
    void soundEmission() const override;
    void feedItself() const override;   
    void fly() const override;          
};