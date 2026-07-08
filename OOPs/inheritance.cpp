#include<iostream>
#include <string>
using namespace std;

class Animal{
    public:
    string color;
    
    void eat(){
        cout << "eats\n";
    }
    
    void breathe(){
        cout << "breathe\n";
    }
};

class Fish : public Animal{
    public:
    int fins;

    void swim(){
    cout << "swims\n";
    }
};


int main(){
    return 0;
}