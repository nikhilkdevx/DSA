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
// class Student{
//     public:
//     int marks;
//     string Name;

//     Student(string name,int marks) {
//         this->marks = marks;
//         this->Name = name;
//     }

//     bool operator < (const Student &obj) const {
//         return this->marks > obj.marks;
//     }
// };


// Prirority Queues For Pairs

// struct comparePair{
//     bool operator() (pair<string,int> &p1, pair<string,int> &p2){
//         return p1.second > p2.second;
//     }
// };

// int main(){
//     priority_queue<pair<string,int>,vector<pair<string,int>>,comparePair> p;
//     p.push(make_pair("Nik",85));
//     p.push(make_pair("Madhu",95));
//     p.push(make_pair("Nandani",100));
//     p.push(make_pair("Gudiya",100));
//     p.push(make_pair("Abhi",90));

//     while (!p.empty()){
//         cout << p.top().first << " " << p.top().second << endl;
//         p.pop();
//     }

//     return 0;

    
// }

// Heaps Revision 

class Heap{
    vector<int>v;
    public:

    void push(int val){
        v.push_back(val);

        int x = v.size() - 1;
        int parI = (x - 1) / 2 ;

        while(parI >= 0 && v[x] > v[parI]){
            swap(v[x],v[parI]);
            x = parI;
            parI = (x - 1) / 2;
        }

    }


    void heapify(int parI){
        if(parI >= v.size()){
            return;
        }

        int leftChild = 2 * parI + 1;
        int rightChild = 2 * parI + 2;
        int maxIdx = parI;
        
        if(leftChild < v.size() && v[leftChild] > v[maxIdx]){
            maxIdx = leftChild;
        }
        if(rightChild < v.size() && v[rightChild] > v[maxIdx]){
            maxIdx = rightChild;
        }

        swap(v[maxIdx],v[parI]);
        if(parI != maxIdx){
            heapify(maxIdx);
        }
    }
    void pop(){
        swap(v[0],v[v.size() - 1]);
        v.pop_back();
        heapify(0);

    }

    int top(){
        return v[0];
    }

    bool empty(){
        return v.size() == 0;
    }
};