// Heap ---> 

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Heap{
    vector<int> vec;
public:
    void push(int val){ // T(c) ---> O(logn)
        // Step 1
        vec.push_back(val);

        // Fix Heap
        int x = vec.size() - 1; // ChildIndex
        int parI = (x - 1) / 2;

        while(parI >= 0 && vec[x] > vec[parI]){
            swap(vec[x],vec[parI]);
            x = parI;
            parI = (x-1) / 2;
        }

    }

    void pop(){

    }

    int top(){
        return vec[0]; // Highest Priority Element
    }

    bool empty(){
        return vec.size() == 0;
    }
};

int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);
    heap.push(60);
}