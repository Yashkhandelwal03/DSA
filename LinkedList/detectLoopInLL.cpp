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

bool findLoop(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL){
        fast = fast->nxt;
        if(fast->nxt != NULL){
            fast = fast->nxt;
        }
        slow = slow->nxt;
        if(fast == slow){
            return true;
        }
    }
    return false;
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
    J->nxt = F;

    cout << findLoop(A) << endl;

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