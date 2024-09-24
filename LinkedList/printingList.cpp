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

//Adding node ahead

void AddNodeHead(Node* head, int num){
    Node* temp = new Node(num);
    temp->nxt = head;
    head = temp;
    // Print(temp);
}

void AddNodeTail(Node* head, int num){
    Node* data = new Node(num);
    Node* temp = head;
    while(temp->nxt != NULL){
        temp = temp->nxt;
    }
    temp->nxt = data;
    // Print(head);
}

void deleteNode(Node* head,int x){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    int i = 1;
    while(i<x-1){
        temp = temp->nxt;
        i++;
    }
    Node* newCut = temp->nxt;
    temp->nxt = newCut->nxt;
    newCut->nxt = NULL;
    Print(head);
}
int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);

    A->nxt = B;
    B->nxt = C;
    C->nxt = D;

    // AddNodeHead(A,5);
    AddNodeTail(A,45); 
    deleteNode(A,3);

    return 0;
}