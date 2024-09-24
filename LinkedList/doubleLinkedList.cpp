//Single linked list

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* nxt;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->nxt = NULL;
    }

    Node(int x){
        this->data = x;
        this->prev = NULL;
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

//Adding node ahead

void AddNodeHead(Node* head, int num){
    Node* temp = new Node(num);
    if(head == NULL){
        head = temp; 
    }else{
        temp->nxt = head;
        head->prev = temp;
        head = temp;
    }
    Print(head);
}


int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);

    A->nxt = B;
    B->prev = A;
    B->nxt = C;
    C->prev = B;
    C->nxt = D;
    D->prev = C;

    AddNodeHead(A,5);
    // AddNodeTail(A,45); 
    // deleteNode(A,3);

    return 0;
}