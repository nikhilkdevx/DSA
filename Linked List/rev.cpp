#include<iostream>
#include<list>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    };
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
            
        }
    }
    
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    };

    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    };

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    };

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
           tail->next = newNode;
           tail = newNode; 
        }
    };

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    };

    void insert(int val,int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i =0;i<pos-1;i++){
            if(temp == NULL){
                cout << "Invalid Position\n";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode->next;
    };

    void pop_front(){
        if(head == NULL){
            cout << "Linked List is already Empty\n";
            return;
        }
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    };

    void pop_back(){
       Node* temp = head;
       while(temp->next->next != NULL){
        temp = temp->next;
       } 
       temp->next = NULL;
       delete tail;
       tail = temp;
       
    };

    void seachItr(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                cout << idx << endl;
                return;
            }
            temp = temp->next;
            idx++;
        }
        cout << -1 << endl;
    };

    int helper(Node* temp,int key){
        if(temp == NULL){
            return -1;
        };
        if(temp->data == key){
            return 0;
        };
        int idx = helper(temp->next,key);
        if(idx == -1){
            return -1;
        } else{
            return idx + 1;
        };
    }

    int searchRec(int key){
        return helper(head,key);
    };

    void reverse(){
        
    }

    void removenth(int n){
        int size = getSz();
        
    }

    int getSz(){
        int size = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            size++;
        }
        return size;
    }

    void printList(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }


    
};

void isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
        cout << "Loop Exists\n";
        return;
        }
    }
    cout << "Loop Not Exists\n";
}

void removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout << "Loop Exists\n";
            isCycle = true;
            break;
        }
    }

    if(!isCycle){
        cout << "Cycle doesn't Exist\n";
        return;
    }

    slow = head;
    if(slow == fast){
        while (fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;
        return;
    }

    Node* prev = fast;
    while(slow != fast){
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    prev->next = NULL;
}

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL){
        prev->next = NULL;
    }
    return slow;
}

Node* merge(Node* left,Node* right){
    Node* i = left;
    Node* j = right;
    List ans;
    
    while(i != NULL && j != NULL){
        if( i->data >= j->data){
            ans.push_back(i->data);
            i = i->next;
        } else {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while(i != NULL){
        ans.push_back(i->data);
        i = i->next;

    }

    while(j != NULL){
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;

}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* righthead = splitAtMid(head);
    
    Node* left = mergeSort(head);
    Node* right = mergeSort(righthead);
    return merge(left,right);
}

int main(){
    List ll;
    ll.push_front(9);
    ll.push_front(1);
    ll.push_front(6);
    ll.push_front(8);
    ll.push_front(2);
    ll.printList();
    ll.head = mergeSort(ll.head);
    ll.printList();
    

}