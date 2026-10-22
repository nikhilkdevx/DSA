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
    public:
    int marks;
    string Name;

    Student(string name,int marks) {
        this->marks = marks;
        this->Name = name;
    }

    bool operator < (const Student &obj) const {
        return this->marks > obj.marks;
    }
};

int main(){
    priority_queue<Student> p;
    p.push(Student("Nik",85));
    p.push(Student("Madhu",95));
    p.push(Student("Nandani",100));
    p.push(Student("Gudiya",100));
    p.push(Student("Abhi",90));

    while (!p.empty()){
        cout << p.top().Name << " " << p.top().marks << endl;
        p.pop();
    }

    return 0;

    
}