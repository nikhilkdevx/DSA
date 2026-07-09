#include<iostream>
#include <string>
using namespace std;

class Animal{
    public:
    void eats(){
        cout << "Eats...\n";

    }

    void breathe(){
        cout << "Breathe...\n";
    }
};

class Bird : public Animal{
    public:
    void fly(){
        cout << "Can Fly...\n";
    }
};

class Fish : public Animal{
    public:
    void swim(){
        cout << "Can Swim...\n";
    }
};

class Mammal : public Animal{
    public:
    void walk(){
        cout << "Can Walk ...\n";
    }
};

int main(){
    Bird b1;
    b1.breathe();
    b1.eats();
    b1.fly();

    cout << endl;

    Fish f1;
    f1.breathe();
    f1.eats();
    f1.swim();

    cout << endl;

    Mammal m1;
    m1.breathe();
    m1.eats();
    m1.walk();
    
    
    return 0;

}