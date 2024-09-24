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

void reverseList(Node* prev,Node* A){
    if(A == NULL){
        Print(prev);
        return;
    }
    Node* temp = A->nxt;
    A->nxt = prev;
    reverseList(A,temp);
}

int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);

    A->nxt = B;
    B->nxt = C;
    C->nxt = D;
    Node* prev = NULL;
    reverseList(prev,A);

    delete prev;
    delete A;
    delete B;
    delete C;
    delete D;
    
    return 0;
}