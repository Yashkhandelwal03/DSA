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

Node* reverseGroup(Node* &head,int x){
    if(head == NULL){
        return NULL;
    }

    //defining values
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;

    while(count < x || curr != NULL){
        forward = curr->nxt;
        curr->nxt = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != NULL){
        head->nxt = reverseGroup(forward,x);
    }
    return prev;
}


int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);
    Node* E = new Node(50);
    Node* F = new Node(60);
    Node* G = new Node(70);
    Node* H = new Node(80);
    Node* I = new Node(90);
    Node* J = new Node(100);

    A->nxt = B;
    B->nxt = C;
    C->nxt = D;
    D->nxt = E;
    E->nxt = F;
    F->nxt = G;
    G->nxt = H;
    H->nxt = I;
    I->nxt = J;

    Node* x = reverseGroup(A,3);
    Print(x);

    delete A;
    delete B;
    delete C;
    delete D;
    delete E;
    delete F;
    delete G;
    delete H;
    delete I;
    delete J;

    return 0;
}





// if(head == NULL){
//         return head;
//     }
//     int i = 1;
//     Node* temp = head->nxt;
//     while(i<x and head != NULL){
//         head->nxt = prev;
//         prev = head;
//         head = temp;
//         temp = temp->nxt;
//         i++;
//     }
//     if(temp != NULL){
//         head->nxt = reverseGroup(prev,temp,x);
//     }
//     return prev;