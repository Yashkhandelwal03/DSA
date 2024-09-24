//Single linked list

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* nxt;

    Node(){
        this->data = 0;
        this->nxt = NULL;
    }

    Node(int x){
        this->data = x;
        this->nxt = NULL;
    }
};

void Print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->nxt;
    }
}

int findMiddle(Node* head){
    int count = 0;
    Node* fast = head;
    while(fast != NULL){
        count++;
        fast = fast->nxt;
        if(fast != NULL){
            fast = fast->nxt;
        }
    }
    return count;
}

int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);
    Node* E = new Node(50);

    A->nxt = B;
    B->nxt = C;
    C->nxt = D;
    D->nxt = E;

    int x = findMiddle(A);
    cout << x << endl;

    delete A;
    delete B;
    delete C;
    delete D;
    delete E;

    return 0;
}