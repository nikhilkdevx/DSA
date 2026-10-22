#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

// Priority Queues 
// int main(){
//     priority_queue<int,vector<int>,greater<int>> p;
//     p.push(2);
//     p.push(9);
//     p.push(0);


//     while(!p.empty()){
//         cout << p.top() << " ";
//         p.pop();
//     }
// }

//Priority Queues On Class
class Student{
    int marks;
    string Name;
public:
    string name(string name){
        this->Name = name;
    }

    int marks(int marks){
        this->marks = marks;
    }

    bool operator < (const Student &obj) const {
        return this->marks < obj.marks;
    }
};

int main(){
    priority_queue<int> p;
    Student s1;
    s1.marks(100);
    s1.name("Nik");

    Student s2;
    s2.marks(300);
    s2.name("Nan");

    Student s3;
    s3.marks(500);
    s3.name("Gud");

    Student s4;
    s4.marks(450);
    s4.name("Abhi");

    ;

    
}