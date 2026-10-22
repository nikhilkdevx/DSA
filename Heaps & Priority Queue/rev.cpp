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
    Student(int marks, string name){
        this->marks = marks;
        this->Name = name;
    };

    bool operator < (const Student &obj) const {
        return this->marks < obj.marks;
    }
};

int main(){
    
}