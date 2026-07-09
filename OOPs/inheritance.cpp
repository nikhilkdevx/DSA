#include<iostream>
#include <string>
using namespace std;

class Animal{
    protected:
    string color;
    
    void eat(){
        cout << "eats\n";
    }
    
    void breathe(){
        cout << "breathe\n";
    }
};

class Fish : private Animal{
    public:
    int fins;

    void swim(){
    breathe();
    cout << "swims\n";
    }
};


int main(){
    Fish f1;
    int fins = 3;
    f1.swim();
    return 0;
}