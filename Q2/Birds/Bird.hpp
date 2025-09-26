#pragma once
#include <string>

using namespace std;

class Bird {
private:
    string name;
    double weight;
    int age;

protected:
    string habitat;

public:
    Bird(const string& name, double weight, int age, const string& habitat);
    virtual ~Bird() = default;

    string getName() const;
    double getWeight() const;
    int getAge() const;
    void setAge(int newAge);
    void setWeight(double newWeight);
    
    virtual void soundEmission() const = 0;
    virtual void feedItself() const = 0;
    virtual void fly() const = 0;
    virtual void displayInfo() const;
};