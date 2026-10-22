 // Heap ---> 

#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Write Min Heap Class by your OwnSelf
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

    void heapify(int parI){
        if(parI >= vec.size()){
            return;
        }
        int leftChild = 2 * parI + 1;
        int rightChild = 2 * parI + 2;
        int maxIdx = parI;
        if(leftChild < vec.size() && vec[leftChild] > vec[maxIdx]){
            maxIdx = leftChild;
        }
        if(rightChild < vec.size() && vec[rightChild] > vec[maxIdx]){
            maxIdx = rightChild;
        }

        swap(vec[parI],vec[maxIdx]);
        if(maxIdx != parI) { // Swap with Child Node
            heapify(maxIdx);
        }
    }
    void pop(){
        // Step 1
        swap(vec[0] , vec[vec.size() -1]);

        // Step 2
        vec.pop_back();

        // step 3
        heapify(0);
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
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);
   
    while(!heap.empty()){
       cout << "top = " << heap.top() << endl;
        heap.pop(); 
    }
    return 0;
}